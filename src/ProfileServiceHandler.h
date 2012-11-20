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

#ifndef _PROFILESERVICEHANDLER_H
#define _PROFILESERVICEHANDLER_H

#include <string>
#include <map>

#include "PackageList.h"

// Forward declare axis2 types, only used by private class members
struct axutil_env;
struct axis2_stub;
struct axutil_log_ops;
struct prf_packageListType;
struct prf_internalServerErrorFault;
struct prf_invalidParameterFault;
struct prf_noActiveSessionFault;

/**
 * @brief A class to invoke operations defined the Profile Service Protocol.
 *
 * Implements all SOAP operations except getKeyExchangeObject and functions for retrieving status and errors.
 */
class ProfileServiceHandler
{
public:
    ProfileServiceHandler(const std::string uri, const std::string useragent);
    ~ProfileServiceHandler();

    typedef enum
    {
        STATUS_UNKNOWN = -1,
        STATUS_SUCCESS = 0,
        ERROR_START = 4096, /* offset enough to avoid conflicts with AXIS2 ERRORS */
        ERROR_NETWORK,
        ERROR_MISSING_ELEMENT,
        ERROR_OTHER,
        FAULT_INTERNALSERVERERROR,
        FAULT_INVALIDPARAMETER,
        FAULT_NOACTIVESESSION,
    } status;

    // SOAP operations defined in WSDL
    bool logOn(std::string username, std::string password);
    bool logOff();
    bool setAttribute(std::string key, std::string value);
    std::string getAttribute(std::string key);
    kps::PackageList* queryPackageList(std::string firmwareType, std::string firmwareVersion);

    // Errors and faults
    bool good();
    bool checkEnvironment();
    status getStatus();
    std::string getStatusMessage();
    std::string getLastSoapFaultReason();

private:
    // Functions for parsing responses
    kps::PackageList* parsePackageListResult(prf_packageListType* queryPackageListResult);
    void parseInternalServerErrorFault(prf_internalServerErrorFault* fault);
    void parseInvalidParameterFault(prf_invalidParameterFault* fault);
    void parseNoActiveSessionFault(prf_noActiveSessionFault* fault);

    void initiateStatusMap();
    std::map<int, status> statusMap_;

    // varibales to store valuable data
    int lastErrorNumber_;
    std::string lastError_;
    std::string lastSoapFaultReason_;

    // axis2 data types
    axutil_log_ops* log_ops;
    axutil_env* env;
    axis2_stub* stub;
};

#endif
