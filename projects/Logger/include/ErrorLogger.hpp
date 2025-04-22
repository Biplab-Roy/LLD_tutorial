#pragma once

#include "AbstractLogger.hpp"
#include "dataConstants.hpp"

class ErrorLogger : public AbstractLogger {
    public:
    ErrorLogger(LoggerLevel logLevel) {
        this->currentLogLevel = logLevel;
    }

    void Display(std::string message, LoggerIOManager *targetLogLevel) {
        std::string output = "[ERROR] " + message;
        targetLogLevel->notifyAllObservers(currentLogLevel, output);
    }
};