#!/bin/sh

set -x
set -e

#############################################################################
#  Options for codegen                                                      #
#############################################################################

# -d <databinding>         Valid databinding(s) are adb, xmlbeans, jibx and jaxbri (Default: adb).
# -o <path>                Specify a directory path for the generated code.
# -t                       Generate a test case for the generated code.
# -f                       Flattens the generated files
# -uw                      Switch on un-wrapping.
# -or                      Overwrite the existing classes
# -u                       Unpacks the databinding classes

PARAMS="-uri profile-service-01.wsdl -d adb -o src -t -f -uw -or -u"

if [ $1 = '-h' ] || [ $1 = '--help' ]; then
    PARAMS=''
fi

#############################################################################
#  Generate axis2c stubs from wsdl                                          #
#############################################################################

AXIS2_VERSION='1.6.2'

if [ ! -d axis2-$AXIS2_VERSION ]; then
    echo "codegen not found, did you run install-codegen.sh script?"
    exit 1
fi

AXIS2_HOME=$(dirname $(realpath $0))/axis2-$AXIS2_VERSION

# copied and modified from WSDL2C.sh
for f in $(find $AXIS2_HOME -name "*.jar")
do
    AXIS2_CLASSPATH=$AXIS2_CLASSPATH:$f
done
AXIS2_CLASSPATH=$AXIS2_CLASSPATH:$AXIS2_HOME/conf/

java -Djava.net.preferIPv4Stack=true -classpath $AXIS2_CLASSPATH org.apache.axis2.wsdl.WSDL2C $PARAMS

#############################################################################
#  Rename stubs and data types to avoid clashes with daisyonline stubs      #
#############################################################################

if [ -z $PARAMS ]; then exit; fi

sed 's/adb_/prf_/g' -i src/*.c src/*.h
sed 's/ADB_/PRF_/g' -i src/*.c src/*.h src/*.vcproj
sed 's/axis2_extension_mapper/axis2_prf_extension_mapper/g' -i src/*.h src/*.c src/*.vcproj
rename 's/axis2_extension/axis2_prf_extension/' src/axis2_extension*
rename 's/adb_/prf_/' src/*.h src/*.c

#############################################################################
#  Apply patches to generated code                                          #
#############################################################################

cd src
patch -p1 < ../stubs_axis2_stubs-warnings.patch
cd ..

#############################################################################
#  Add license to generated code                                            #
#############################################################################

LICENSEFILE="license.txt"

for file in src/*.{c,h}
do
echo $file
    cat "$LICENSEFILE" "$file" > $$.tmp
    mv $$.tmp $file
done
