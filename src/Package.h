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

#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <string>

namespace kps
{

class Package
{
public:
    Package();
    Package(std::string description, std::string id, std::string md5sum, std::string type, std::string name, std::string uri, int size);
    virtual ~Package();
    std::string getDescription() const;
    void setDescription(std::string description);
    std::string getId() const;
    void setId(std::string id);
    std::string getMd5sum() const;
    void setMd5sum(std::string md5sum);
    std::string getName() const;
    void setName(std::string name);
    int getSize() const;
    void setSize(int size);
    std::string getType() const;
    void setType(std::string type);
    std::string getUri() const;
    void setUri(std::string uri);
    std::string getLocalFilename() const;
    void setLocalFilename(std::string localFilename);

private:
    std::string description_;
    std::string id_;
    std::string md5sum_;
    std::string type_;
    std::string name_;
    int size_;
    std::string uri_;
    std::string localFilename_;
};

} /* namespace kps */
#endif /* PACKAGE_H_ */
