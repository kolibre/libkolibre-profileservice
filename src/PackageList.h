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

#ifndef PACKAGELIST_H_
#define PACKAGELIST_H_

#include <string>
#include "Package.h"
#include <vector>

namespace kps
{

class PackageList
{
public:
    PackageList();
    virtual ~PackageList();

    std::string getName() const;
    void setName(std::string name);
    std::string getDescription() const;
    void setDescription(std::string description);
    std::string getVersion() const;
    void setVersion(std::string version);
    std::vector<kps::Package> getPackages() const;
    int getPackagesSize();
    void addPackage(kps::Package);
    bool removePackageAt(int index);

private:
    std::string name_;
    std::string description_;
    std::string version_;
    std::vector<kps::Package> packages_;
};

} /* namespace kps */
#endif /* PACKAGELIST_H_ */
