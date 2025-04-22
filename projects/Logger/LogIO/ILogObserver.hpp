#pragma once
#include <iostream>

class ILogOberver {
    public:
    virtual void Log(std::string message) = 0;
};