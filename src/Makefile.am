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
#

AUTOMAKE_OPTIONS = foreign

HDRS = \
ProfileServiceHandler.h \
Package.h \
PackageList.h

SRCS = \
ProfileServiceHandler.cpp \
Package.cpp \
PackageList.cpp

SUBDIRS = stubs .

# Install the headers in a versioned directory - e.g. examplelib-1.0:
library_includedir = $(includedir)/libkolibre/profile-$(PACKAGE_VERSION)
library_include_HEADERS = $(HDRS)

lib_LTLIBRARIES = libkolibre-profile.la

libkolibre_profile_la_SOURCES = $(SRCS)
libkolibre_profile_la_LIBADD = $(top_builddir)/src/stubs/libprofilestubs.la
libkolibre_profile_la_LDFLAGS = -version-info $(VERSION_INFO) @LOG4CXX_LIBS@ @AXIS2C_LIBS@
libkolibre_profile_la_CXXFLAGS = -I$(top_srcdir)/src/stubs @LOG4CXX_CFLAGS@ @AXIS2C_CFLAGS@

EXTRA_DIST = axis2c_client_home.h
