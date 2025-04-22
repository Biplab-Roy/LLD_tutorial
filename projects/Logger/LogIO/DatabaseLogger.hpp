#pragma once

#include "ILogObserver.hpp"

class DatabaseLogger : public ILogOberver {
    void Log(std::string message) {
        printf("[DATABASE] %s\n", message.c_str());
    }
};