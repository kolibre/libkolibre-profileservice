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
axis2_prf_extension_mapper.h \
axis2_stub_Kolibre_Profile.h \
prf_getAttribute.h \
prf_getAttributeResponse.h \
prf_getAttributeResponseType.h \
prf_getAttributeType.h \
prf_internalServerErrorFault.h \
prf_internalServerErrorFaultType.h \
prf_invalidParameterFault.h \
prf_invalidParameterFaultType.h \
prf_logOff.h \
prf_logOffResponse.h \
prf_logOffResponseType.h \
prf_logOffType.h \
prf_logOn.h \
prf_logOnResponse.h \
prf_logOnResponseType.h \
prf_logOnType.h \
prf_noActiveSessionFault.h \
prf_noActiveSessionFaultType.h \
prf_packageListType.h \
prf_packageType.h \
prf_packagesType.h \
prf_queryPackageList.h \
prf_queryPackageListResponse.h \
prf_queryPackageListResponseType.h \
prf_queryPackageListType.h \
prf_setAttribute.h \
prf_setAttributeResponse.h \
prf_setAttributeResultType.h \
prf_setAttributeType.h

SRCS = \
axis2_prf_extension_mapper.c \
axis2_stub_Kolibre_Profile.c \
prf_getAttribute.c \
prf_getAttributeResponse.c \
prf_getAttributeResponseType.c \
prf_getAttributeType.c \
prf_internalServerErrorFault.c \
prf_internalServerErrorFaultType.c \
prf_invalidParameterFault.c \
prf_invalidParameterFaultType.c \
prf_logOff.c \
prf_logOffResponse.c \
prf_logOffResponseType.c \
prf_logOffType.c \
prf_logOn.c \
prf_logOnResponse.c \
prf_logOnResponseType.c \
prf_logOnType.c \
prf_noActiveSessionFault.c \
prf_noActiveSessionFaultType.c \
prf_packageListType.c \
prf_packageType.c \
prf_packagesType.c \
prf_queryPackageList.c \
prf_queryPackageListResponse.c \
prf_queryPackageListResponseType.c \
prf_queryPackageListType.c \
prf_setAttribute.c \
prf_setAttributeResponse.c \
prf_setAttributeResultType.c \
prf_setAttributeType.c

noinst_LTLIBRARIES = libprofilestubs.la

libprofilestubs_la_SOURCES = $(SRCS)
libprofilestubs_la_LDFLAGS = @AXIS2C_LIBS@ \
							 -laxutil \
							 -laxis2_axiom \
							 -laxis2_engine \
							 -laxis2_parser \
							 -laxis2_http_sender \
							 -laxis2_http_receiver
libprofilestubs_la_CFLAGS = @AXIS2C_CFLAGS@ -Wno-unused-variable
libprofilestubs_la_CXXFLAGS = @AXIS2C_CFLAGS@ -Wno-unused-variable

EXTRA_DIST = $(HDRS)
