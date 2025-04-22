#pragma once

#include "ILogObserver.hpp"

class ConsoleLogger : public ILogOberver {
    void Log(std::string message) {
        printf("[CONSOLE] %s\n", message.c_str());
    }
};