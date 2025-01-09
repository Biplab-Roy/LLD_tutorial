add_library(libVehicle SHARED
    FourWheeler.cpp
    TwoWheeler.cpp
)

target_include_directories(libVehicle PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(
    ${PROJECT_SOURCE_DIR}  # Include the root directory of the project
    ${PROJECT_SOURCE_DIR}/Vehicle/include
)