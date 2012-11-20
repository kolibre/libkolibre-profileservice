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

    ProfileServiceHandler PSHandler(std::string(argv[1]), "errorinvaliduri/1.2.3");

    if (!PSHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // unsuccessful logOn request
    assert(!PSHandler.logOn(std::string(argv[2]),std::string(argv[3])));
    assert(!PSHandler.good());
    assert(PSHandler.getStatus() == ProfileServiceHandler::ERROR_OTHER);

    return 0;
}
