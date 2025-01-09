add_library(libParkingSpot SHARED
    ParkingSpot.cpp
    FourWheelerParkingSpot.cpp
    TwoWheelerParkingSpot.cpp
    ParkingSpotFactory.hpp
    ParkingSpotManager.cpp
    FourWheelerParkingSpotManager.cpp
    TwoWheelerParkingSpotManager.cpp
)

target_include_directories(libParkingSpot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(
    ${PROJECT_SOURCE_DIR}  # Include the root directory of the project
    ${PROJECT_SOURCE_DIR}/ParkingSpot/include
)