add_library(libParkingLot SHARED
    Entrance.cpp
    Exit.cpp
)

target_include_directories(libParkingLot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(
    ${PROJECT_SOURCE_DIR}  # Include the root directory of the project
    ${PROJECT_SOURCE_DIR}/src/include
)