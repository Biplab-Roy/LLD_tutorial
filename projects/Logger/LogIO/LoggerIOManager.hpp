#pragma once

#include <unordered_map>
#include <vector>
#include <iostream>
#include "../dataConstants.hpp"
#include "FileLogger.hpp"
#include "ConsoleLogger.hpp"
#include "DatabaseLogger.hpp"

class LoggerIOManager {
    public:
    void AddObserver(LoggerLevel _logLevel, ILogOberver *_logObserver) {
        observers[_logLevel].push_back(_logObserver);
    }

    void RemoveObserver(LoggerLevel _logLevel, ILogOberver *_logObserver) {
        auto &logOberserver = observers[_logLevel];
        auto it = logOberserver.begin();
        while(it != logOberserver.end()) {
            if(*it == _logObserver) {
                logOberserver.erase(it);
                return;
            }
            it++;
        }
    }

    void notifyAllObservers(LoggerLevel _logLevel, std::string message) {
        for(auto &observer : observers[_logLevel]) {
            observer->Log(message);
        }
    }
    private:
    std::unordered_map<LoggerLevel, std::vector<ILogOberver*>> observers;

};