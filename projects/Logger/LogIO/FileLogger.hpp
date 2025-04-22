#pragma once

#include "ILogObserver.hpp"

class FileLogger : public ILogOberver {
    void Log(std::string message) {
        printf("[FILE] %s\n", message.c_str());
    }
};