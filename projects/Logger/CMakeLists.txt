cmake_minimum_required(VERSION 3.28.3)
Project(Logger)

set(SOURCE_FILES
    Logger.hpp
    dataConstants.hpp
    Driver.cpp
    LogIO/LoggerIOManager.hpp
)

set(HEADER_FILES
    AbstractLogger.hpp
    DebugLogger.hpp
    ErrorLogger.hpp
    InfoLogger.hpp
)


add_executable(Logger ${SOURCE_FILES})

include_directories(
    ${PROJECT_SOURCE_DIR}  # Include the root directory of the project
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/LogIO
)