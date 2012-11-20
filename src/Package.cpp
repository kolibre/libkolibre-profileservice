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

#include "Package.h"

namespace kps
{

/**
 * Constructor
 */
Package::Package()
{
}

/**
 * Constructor
 * @param description The package description
 * @param id The package id
 * @param md5sum The MD5 sum of the resource
 * @param type The type of package
 * @param name The package name
 * @param uri The URI to the resource
 * @param size The size of the resource
 */
Package::Package(std::string description, std::string id, std::string md5sum, std::string type, std::string name, std::string uri, int size) :
        description_(description), id_(id), md5sum_(md5sum), type_(type), name_(name), size_(size), uri_(uri)
{
}

/**
 * Destructor
 */
Package::~Package()
{
}

/**
 * Get the package description.
 *
 * @return Returns the description.
 */
std::string Package::getDescription() const
{
    return description_;
}

/**
 * Set pacakge description.
 *
 * @param description The wanted description.
 */
void Package::setDescription(std::string description)
{
    description_ = description;
}

/**
 * Get the identifier of this package.
 *
 * @return Returns the package id.
 */
std::string Package::getId() const
{
    return id_;
}

/**
 * Set package id.
 *
 * @param id The wanted id.
 */
void Package::setId(std::string id)
{
    id_ = id;
}

/**
 * Get the package MD5 sum.
 *
 * @return Returns the md5 sum.
 */
std::string Package::getMd5sum() const
{
    return md5sum_;
}

/**
 * Set package MD5 sum.
 *
 * @param md5sum The calculated MD5 sum for this file.
 */
void Package::setMd5sum(std::string md5sum)
{
    md5sum_ = md5sum;
}

/**
 * Get package name.
 *
 * @return Returns the name of this package.
 */
std::string Package::getName() const
{
    return name_;
}

/**
 * Set package name.
 * @param name The package name.
 */
void Package::setName(std::string name)
{
    name_ = name;
}

/**
 * Get package size.
 *
 * @return Returns he size of the package.
 */
int Package::getSize() const
{
    return size_;
}

/**
 * Set package size.
 *
 * @param size The size of the package.
 */
void Package::setSize(int size)
{
    size_ = size;
}

/**
 * Get the package type.
 *
 * @return Returns the type of package.
 */
std::string Package::getType() const
{
    return type_;
}

/**
 * Set the package type
 * @param type The type of package .
 */
void Package::setType(std::string type)
{
    type_ = type;
}

/**
 * Get the URI address for the resource in this package
 *
 * @return Returns package URI address
 */
std::string Package::getUri() const
{
    return uri_;
}

/**
 * Set the URI for this package.
 * @param uri The URI wanted.
 */
void Package::setUri(std::string uri)
{
    uri_ = uri;
}

/**
 * Get the local filename for this package.
 *
 * @return Returns the local filename of this resource.
 */
std::string Package::getLocalFilename() const
{
    return localFilename_;
}

/**
 * Set the local filename for this package.
 *
 * @param localFilename The filename wanted.
 */
void Package::setLocalFilename(std::string localFilename)
{
    localFilename_ = localFilename;
}
}
