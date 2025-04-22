#include "Logger.hpp"

int main() {
    Logger &logger = Logger::getInstance();
    logger.Debug("This is debug message.");
    logger.Info("This is info message.");
    logger.Error("This is an error.");
}