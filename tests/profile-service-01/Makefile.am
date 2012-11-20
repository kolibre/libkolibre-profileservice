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

check_PROGRAMS = \
	logon \
	setattribute \
	getattribute \
	querypackagelist \
	logoff \
	faultinternalservererror \
	faultnoactivesession \
	faultinvalidparameter \
	errorinvaliduri \
	errornonetwork \
	memoryleak

TESTS = \
	logon.sh \
	setattribute.sh \
	getattribute.sh \
	querypackagelist.sh \
	logoff.sh \
	faultinternalservererror.sh \
	faultnoactivesession.sh \
	faultinvalidparameter.sh \
	errorinvaliduri.sh \
	errornonetwork.sh \
	memoryleak.sh

logon_SOURCES = logon.cpp
setattribute_SOURCES = setattribute.cpp
getattribute_SOURCES = getattribute.cpp
querypackagelist_SOURCES = querypackagelist.cpp
logoff_SOURCES = logoff.cpp
faultinternalservererror_SOURCES = faultinternalservererror.cpp
faultnoactivesession_SOURCES = faultnoactivesession.cpp
faultinvalidparameter_SOURCES = faultinvalidparameter.cpp
errorinvaliduri_SOURCES = errorinvaliduri.cpp
errornonetwork_SOURCES = errornonetwork.cpp
memoryleak_SOURCES = memoryleak.cpp

LDADD = -lkolibre-profile
AM_LDFLAGS = -L$(top_builddir)/src @LOG4CXX_LIBS@
AM_CFLAGS = -g
AM_CPPFLAGS = -g -I$(top_srcdir)/src -I$(top_srcdir)/src/stubs

EXTRA_DIST = \
	logOn \
	setAttribute \
	getAttribute \
	queryPackageList \
	logOff \
	faults \
	memoryLeak \
	logon.sh \
	setattribute.sh \
	getattribute.sh \
	querypackagelist.sh \
	logoff.sh \
	faultinternalservererror.sh \
	faultnoactivesession.sh \
	faultinvalidparameter.sh \
	errorinvaliduri.sh \
	errornonetwork.sh \
	memoryleak.sh \
	setup_logging.h \
	memoryleak.supp \
	run

clean-local: clean-local-check
.PHONY: clean-local-check

clean-local-check:
	-rm -rf *.log
	-rm -rf *.order
