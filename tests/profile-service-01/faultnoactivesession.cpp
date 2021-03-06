/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-profileservice.
 *
 * Kolibre-profileservice is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-profileservice is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-profileservice. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ProfileServiceHandler.h"
#include "setup_logging.h"

#include <assert.h>
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Usage: " << argv[0] << " <uri> <username> <password>" << std::endl;
        return -1;
    }

    if (getenv("AXIS2C_HOME"))
    {
        std::cout << "Setting AXIS2C_HOME forces logs to be written there, so don't!" << std::endl;
        return 1;
    }

    setup_logging();

    ProfileServiceHandler PSHandler(std::string(argv[1]), "faultnoactivesession/1.2.3");

    if (!PSHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // unsuccessful setAttribute request
    assert(!PSHandler.setAttribute("foo", "bar"));
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::FAULT_NOACTIVESESSION);
    assert(PSHandler.getLastSoapFaultReason() == "No Active Session");

    // unsuccessful getAttribute request
    assert(PSHandler.getAttribute("foo") == "");
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::FAULT_NOACTIVESESSION);
    assert(PSHandler.getLastSoapFaultReason() == "No Active Session");

    // unsuccessful queryPackageList request
    kps::PackageList* packageList;
    packageList = PSHandler.queryPackageList("Type", "Version");
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::FAULT_NOACTIVESESSION);
    assert(PSHandler.getLastSoapFaultReason() == "No Active Session");

    // unsuccessful logOff request;
    assert(!PSHandler.logOff());
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::FAULT_NOACTIVESESSION);
    assert(PSHandler.getLastSoapFaultReason() == "No Active Session");

    return 0;
}
