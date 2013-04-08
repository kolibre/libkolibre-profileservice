## Copyright (C) 2012 Kolibre
#
# This file is part of kolibre-profileservice.
#
# Kolibre-profileservice is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 2.1 of the License, or
# (at your option) any later version.
#
# Kolibre-profileservice is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with kolibre-profileservice. If not, see <http://www.gnu.org/licenses/>.


# Process this file with autoconf to produce a configure script.

dnl -----------------------------------------------
dnl  Release instructions
dnl -----------------------------------------------
dnl
dnl  When you are about to release the software
dnl  either as a stable release or an unstable release
dnl  you should update the *_VERSION variables below
dnl  according to the following rules:
dnl
dnl  1. If any interfaces has been removed or changed,
dnl     increment MAJOR_VERSION and set others to 0
dnl  2. If any interface has been added,
dnl     increment MINOR_VERSION and set PATCH_VERSION to 0
dnl  3. If only the source code has changed,
dnl     increment PATCH_VERSION
dnl
dnl  If you are releasing a stable version,
dnl  set package version number in AC_INIT to
dnl  [$MAJOR_VERSION.$MINOR_VERSION.$PATCH_VERSION]
dnl
dnl  If you are releasing an unstable version,
dnl  add a string (i.e -alpha or -beta or -rc1) to the
dnl  package version in AC_INIT after $PATCH_VERSION
dnl  e.g. [$MAJOR_VERSION.$MINOR_VERSION.$PATCH_VERSION-rc1]

# Setup version here:
m4_define([MAJOR_VERSION], [0])
m4_define([MINOR_VERSION], [0])
m4_define([PATCH_VERSION], [1])
m4_define([EXTRA_VERSION], [])

AC_PREREQ([2.67])
AC_INIT([kolibre-profile],[MAJOR_VERSION.MINOR_VERSION.PATCH_VERSION[]EXTRA_VERSION],[BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE(tar-pax color-tests parallel-tests)

VERSION_INFO=m4_eval(MAJOR_VERSION + MINOR_VERSION):PATCH_VERSION:MINOR_VERSION
AC_SUBST(VERSION_INFO)

# Checks for programs.
LT_INIT
AC_LANG([C++])
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_MAKE_SET
ACX_PTHREAD

dnl -----------------------------------------------
dnl Doxygen settings
dnl -----------------------------------------------

DX_DOXYGEN_FEATURE(ON)
DX_HTML_FEATURE(ON)
DX_PDF_FEATURE(ON)
DX_INIT_DOXYGEN([kolibre-profileservice], doxygen.cfg, [doxygen-doc])

# Checks for libraries.

dnl -----------------------------------------------
dnl check for log4cxx
dnl -----------------------------------------------

PKG_CHECK_MODULES(LOG4CXX, liblog4cxx >= 0.10.0)

AC_SUBST(LOG4CXX_CFLAGS)
AC_SUBST(LOG4CXX_LIBS)

dnl -----------------------------------------------
dnl check for axis2c
dnl -----------------------------------------------

PKG_CHECK_MODULES(AXIS2C, axis2c >= 1.6.0)

AC_SUBST(AXIS2C_CFLAGS)
AC_SUBST(AXIS2C_LIBS)

AXIS2C_PREFIX=$(pkg-config --variable=prefix axis2c)
AC_SUBST(AXIS2C_PREFIX)

# FIXME: Replace `main' with a function in `-laxis2_axiom':
#AC_CHECK_LIB([axis2_axiom], [axiom_util_get_last_child_element_with_localnames])
# FIXME: Replace `main' with a function in `-laxis2_engine':
#AC_CHECK_LIB([axis2_engine], [axis2_engine_resume_send])
# FIXME: Replace `main' with a function in `-laxis2_http_receiver':
#AC_CHECK_LIB([axis2_http_receiver], [axis2_transport_receiver_init])
# FIXME: Replace `main' with a function in `-laxis2_http_sender':
#AC_CHECK_LIB([axis2_http_sender], [axis2_transport_sender_create])
# FIXME: Replace `main' with a function in `-laxis2_parser':
#AC_CHECK_LIB([axis2_parser], [main])
# FIXME: Replace `main' with a function in `-laxutil':
#AC_CHECK_LIB([axutil], [axutil_env_increment_ref])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_INT64_T

# Checks for library functions.
AC_CHECK_FUNCS([memset strchr strdup strstr])

AC_CONFIG_FILES([libkolibre-profile.pc
                 Makefile
                 doxygen.cfg
                 src/Makefile
                 src/stubs/Makefile
                 tests/Makefile
                 tests/profile-service-01/Makefile
                 src/axis2c_client_home.h])
AC_OUTPUT
