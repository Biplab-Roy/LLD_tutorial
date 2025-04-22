#pragma once

#include "AbstractLogger.hpp"
#include "ErrorLogger.hpp"
#include "DebugLogger.hpp"
#include "InfoLogger.hpp"
#include "LoggerIOManager.hpp"

class LogManager {
    public:
    static AbstractLogger* createLogger() {
        AbstractLogger *debugLogger = new DebugLogger(DEBUG);
        AbstractLogger *infoLogger = new InfoLogger(INFO);
        AbstractLogger *errorLogger = new ErrorLogger(ERROR);

        debugLogger->setNextLevelLogger(infoLogger);
        infoLogger->setNextLevelLogger(errorLogger);
        errorLogger->setNextLevelLogger(nullptr);

        return debugLogger;
    }

    static LoggerIOManager* createLoggerIOManager() {
        static LoggerIOManager *loggerIOManager = new LoggerIOManager();
        loggerIOManager->AddObserver(INFO, new FileLogger());
        loggerIOManager->AddObserver(DEBUG, new DatabaseLogger());
        loggerIOManager->AddObserver(ERROR, new ConsoleLogger());
        loggerIOManager->AddObserver(ERROR, new FileLogger());
        return loggerIOManager;
    }
};