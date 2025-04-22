#pragma once

#include "AbstractLogger.hpp"
#include "dataConstants.hpp"

class DebugLogger : public AbstractLogger {
    public:
    DebugLogger(LoggerLevel logLevel) {
        this->currentLogLevel = logLevel;
    }

    void Display(std::string message, LoggerIOManager *targetLogLevel) {
        std::string output = "[DEBUG] " + message;
        targetLogLevel->notifyAllObservers(currentLogLevel, output);
    }
};