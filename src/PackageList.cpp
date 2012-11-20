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

#include "PackageList.h"

using namespace kps;

/**
 * Constructor
 */
PackageList::PackageList()
{
}

/**
 * Destructor
 */
PackageList::~PackageList()
{
}

/**
 * Get the package list name.
 *
 * @return Returns the package list name.
 */
std::string PackageList::getName() const
{
    return name_;
}

/**
 * Set the package list name.
 *
 * @param name The name for the package list.
 */
void PackageList::setName(std::string name)
{
    name_ = name;
}


/**
 * Get the package list description.
 *
 * @return Returns the package list description.
 */
std::string PackageList::getDescription() const
{
    return description_;
}

/**
 * Set the package list description.
 *
 * @param description The description for the package list.
 */
void PackageList::setDescription(std::string description)
{
    description_ = description;
}

/**
 * Get the package list version.
 *
 * @return Returns the package list version.
 */
std::string PackageList::getVersion() const
{
    return version_;
}

/**
 * Set the package lsit version.
 *
 * @param version The version for the package list.
 */
void PackageList::setVersion(std::string version)
{
    version_ = version;
}

/**
 * Get the packages.
 *
 * @return Returns a vector of packages
 */
std::vector<kps::Package> PackageList::getPackages() const
{
    return packages_;
}


/**
 * Get the number of packages in the package list.
 *
 * @return Returns the number of packages in the list.
 */
int PackageList::getPackagesSize()
{
    return packages_.size();
}

/**
 * Add a package to the list.
 *
 * @param package The package to add.
 */
void PackageList::addPackage(kps::Package package)
{
    packages_.push_back(package);
}

/**
 * Remove a package from the list.
 *
 * @param index The index of the package to remove.
 * @return Returns a boolean indicating whether the removal was successful or not.
 */
bool PackageList::removePackageAt(int index)
{
    // Check the bounds
    if (index < 0 || index >= packages_.size())
    {
        return false;
    }
    packages_.erase(packages_.begin() + index);
    return true;
}
