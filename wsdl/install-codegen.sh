#!/bin/sh

set -x
set -e

which mvn || (echo "mvn not found, install package maven2" && exit 1)
which svn || (echo "svn not found, install package subversion" && exit 1)
which javac || (echo "javac not found, install package openjdk-6-jdk" && exit 1)

#############################################################################
#  Build patched axis2c codegen from svn                                    #
#############################################################################

# Trunk version (revision 1396012) of src does not work.
# Claims ADB doesn't support complexTypes with mix content.

AXIS2_SRC_VERSION='1.6.2'
AXIS2_BIN_VERSION='1.6.2'

# download source version of axis2
case $AXIS2_SRC_VERSION in
    '1.6.0')
        svn co http://svn.apache.org/repos/asf/axis/axis2/java/core/tags/v1.6.0 axis2-src
        ;;
    '1.6.1')
        svn co http://svn.apache.org/repos/asf/axis/axis2/java/core/tags/v1.6.1 axis2-src
        ;;
    '1.6.2')
        svn co http://svn.apache.org/repos/asf/axis/axis2/java/core/tags/v1.6.2 axis2-src
        ;;
    *)
        svn co http://svn.apache.org/repos/asf/axis/axis2/java/core/trunk/ axis2-src
        AXIS2_SRC_VERSION='1.7.0-SNAPSHOT'
        ;;
esac

# copy codegen patches (patches apply for version 1.6.2)
cd axis2-src
cp ../axis2_codegen_* .

# apply patches for the modules in the order below
# modules/codegen
patch -p0 < axis2_codegen_error_on_deserialize_failure.patch
patch -p0 < axis2_codegen_failure_before_return_null.patch
patch -p0 < axis2_codegen_free_memory_wrapper_adb_obj.patch
patch -p0 < axis2_codegen_parse_soap_fault_reason.patch
# modules/adb-codegen
patch -p0 < axis2_codegen_type_name_changes.patch
patch -p0 < axis2_codegen_free_memory_after_attribute_parse.patch
patch -p0 < axis2_codegen_stop_deserialize_on_missing_attribute.patch
patch -p0 < axis2_codegen_free_memory_created_namespace.patch

# build only modules codegen and adb-codegen
mvn install -DskipTests=true -pl modules/adb-codegen,modules/codegen
cd ..

# download bin version of axis2
case $AXIS2_BIN_VERSION in
    '1.6.0')
        wget http://archive.apache.org/dist/axis/axis2/java/core/1.6.0/axis2-1.6.0-bin.zip
        ;;
    '1.6.1')
        wget http://archive.apache.org/dist/axis/axis2/java/core/1.6.1/axis2-1.6.1-bin.zip
        echo ""
        ;;
    '1.6.2')
        wget http://www.nic.funet.fi/pub/mirrors/apache.org//axis/axis2/java/core/1.6.2/axis2-1.6.2-bin.zip
        ;;
esac

if [ ! -d axis2-$AXIS2_BIN_VERSION-bin.zip ]; then
    unzip axis2-$AXIS2_BIN_VERSION-bin.zip

    # replace modified codegen jar files
    cd axis2-$AXIS2_BIN_VERSION/lib
    mv axis2-codegen-$AXIS2_BIN_VERSION.jar axis2-codegen-$AXIS2_BIN_VERSION.jar.bak
    mv axis2-adb-codegen-$AXIS2_BIN_VERSION.jar axis2-adb-codegen-$AXIS2_BIN_VERSION.jar.bak
    cp ~/.m2/repository/org/apache/axis2/axis2-codegen/$AXIS2_SRC_VERSION/axis2-codegen-$AXIS2_SRC_VERSION.jar .
    cp ~/.m2/repository/org/apache/axis2/axis2-adb-codegen/$AXIS2_SRC_VERSION/axis2-adb-codegen-$AXIS2_SRC_VERSION.jar .
    cd ..
fi
