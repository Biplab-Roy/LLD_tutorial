#pragma once

#include <string>
#include "dataConstants.hpp"
#include "LogIO/LoggerIOManager.hpp"

class AbstractLogger {
    public:
        AbstractLogger() = default;

        void setNextLevelLogger(AbstractLogger *nextLevelLogger) {
            _nextLevelLogger = nextLevelLogger;
        }

        void LogMessage(LoggerLevel logLevel, std::string message, LoggerIOManager *targetLogLevel) {
            if(logLevel <= currentLogLevel) {
                Display(message, targetLogLevel);
            }

            if(_nextLevelLogger) {
                _nextLevelLogger->LogMessage(logLevel, message, targetLogLevel);
            }
        }

        virtual void Display(std::string message, LoggerIOManager *targetLogLevel) = 0;

    private:
        AbstractLogger *_nextLevelLogger;

    protected:
        enum LoggerLevel currentLogLevel;
};