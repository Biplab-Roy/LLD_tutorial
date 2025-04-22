#pragma once

#include "AbstractLogger.hpp"
#include "LogManager.hpp"
#include "LoggerIOManager.hpp"


class Logger {
    public:
    Logger(Logger const&) = delete;
    Logger& operator=(Logger const&) = delete;

    static Logger& getInstance() {
        static Logger _logger;
        return _logger;
    }

    void Info(std::string message) {
        CreateLog(INFO, message);
    }

    void Error(std::string message) {
        CreateLog(ERROR, message);
    }

    void Debug(std::string message) {
        CreateLog(DEBUG, message);
    }

    private:

    void CreateLog (enum LoggerLevel loggerLevel, std::string message) {
        _loggerChain->LogMessage(loggerLevel, message, loggerIOManager);
    }

    Logger() = default;
    inline static AbstractLogger *_loggerChain = LogManager::createLogger();
    inline static LoggerIOManager *loggerIOManager = LogManager::createLoggerIOManager();
};