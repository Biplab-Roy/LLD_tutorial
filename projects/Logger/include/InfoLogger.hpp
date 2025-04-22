#pragma once

#include "AbstractLogger.hpp"
#include "dataConstants.hpp"

class InfoLogger : public AbstractLogger {
    public:
    InfoLogger(LoggerLevel logLevel) {
        this->currentLogLevel = logLevel;
    }

    void Display(std::string message, LoggerIOManager *targetLogLevel) {
        std::string output = "[INFO] " + message;
        targetLogLevel->notifyAllObservers(currentLogLevel, output);
    }
};