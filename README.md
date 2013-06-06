What is Kolibre?
---------------------------------
Kolibre is a Finnish non-profit association whose purpose is to promote
information systems that aid people with reading disabilities. The software
which Kolibre develops is published under open source and made available to all
stakeholders at github.com/kolibre.

Kolibre is committed to broad cooperation between organizations, businesses and
individuals around the innovative development of custom information systems for
people with different needs. More information about Kolibres activities, association 
membership and contact information can be found at http://www.kolibre.org/

What is libkolibre-profileservice?
---------------------------------
libkolibre-profileservice is a library built as a client for fetching and setting remote
settings on a server. The library utilizes the wsdl found in the wsdl folder as
protocol for the communication. The profile wsdl also supports checking for
uppdates.

Documentation
---------------------------------
Kolibre client developer documentation is available at 
https://github.com/kolibre/libkolibre-builder/wiki

This library is documented using doxygen.

Type ./configure && make doxygen-doc to generate documentation.

Platforms
---------------------------------
libkolibre-profileservice has been tested with Linux Debian Squeeze and can be built
using dev packages from apt repositories.


Dependencies
---------------------------------
Major dependencies for libkolibre-profileservice:

* libaxis2c (see requirements for libaxis2c below)
* libpthread
* liblog4cxx

Requirements for libaxis2c
---------------------------------
This component requires that libaxis2c is configured with the flags:

    --enable-guththila=no
    --enable-libxml2
    --enable-libcurl
    --enable-openssl

and that the patches listed below are applied:

    patches/axis2c-1.6.0_curl_ssl.patch
    patches/axis2c-1.6.0_curl_useragent.patch
    patches/axis2c-1.6.0_ssl_utils.patch
    patches/axis2c-1.6.0_xml_https.patch

Building from source
---------------------------------
If building from GIT sources, first do a:
$ autoreconf -fi

If building from a release tarball you can skip the above step.

$ ./configure
$ make
$ make install

see INSTALL for detailed instructions.

Licensing
---------------------------------
Copyright (C) 2012 Kolibre

This file is part of libkolibre-profileservice.

libkolibre-profileservice is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 2.1 of the License, or
(at your option) any later version.

libkolibre-profileservice is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with libkolibre-profileservice. If not, see <http://www.gnu.org/licenses/>.

[![githalytics.com alpha](https://cruel-carlota.pagodabox.com/74210a6e048b9545d378303cd5fe029d "githalytics.com")](http://githalytics.com/kolibre/libkolibre-clientcore)
