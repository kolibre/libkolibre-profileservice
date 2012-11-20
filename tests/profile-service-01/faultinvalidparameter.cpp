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

    ProfileServiceHandler PSHandler(std::string(argv[1]), "faultinvalidparamter/1.2.3");

    if (!PSHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // unsuccessful setAttribute request
    assert(!PSHandler.setAttribute("foo", "bar"));
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::FAULT_INVALIDPARAMETER);
    assert(PSHandler.getLastSoapFaultReason() == "Invalid Parameter");

    // unsuccessful getAttribute request
    assert(PSHandler.getAttribute("foo") == "");
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::FAULT_INVALIDPARAMETER);
    assert(PSHandler.getLastSoapFaultReason() == "Invalid Parameter");

    // unsuccessful queryPackageList request
    kps::PackageList* packageList;
    packageList = PSHandler.queryPackageList("Type", "Version");
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::FAULT_INVALIDPARAMETER);
    assert(PSHandler.getLastSoapFaultReason() == "Invalid Parameter");

    return 0;
}
