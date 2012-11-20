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
#include <fstream>
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

    ProfileServiceHandler PSHandler(std::string(argv[1]), "memoryleak/1.2.3");

    if (!PSHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    for (int i = 0; i < 10; i++)
    {
        // successful logOn request
        assert(PSHandler.logOn(std::string(argv[2]),std::string(argv[3])));
        assert(PSHandler.good());

        // successful setAttribute request
        assert(PSHandler.setAttribute("foo", "bar"));
        assert(PSHandler.good());

        // successful getAttribute request
        assert(PSHandler.getAttribute("foo") == "bar");
        assert(PSHandler.good());

        // successful queryPackageList request
        kps::PackageList* packageList;
        packageList = PSHandler.queryPackageList("Type", "Version");
        assert(packageList != NULL);
        assert(PSHandler.good());
        delete packageList;
        packageList = NULL;

        // successful logOff request;
        assert(PSHandler.logOff());
        assert(PSHandler.good());

        // reset test data order
        assert(argc > 4);
        std::ofstream orderfile;
        orderfile.open(argv[4]);
        orderfile << 1;
        orderfile.close();
    }

    return 0;
}
