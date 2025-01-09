cmake_minimum_required(VERSION 3.28.3)
Project(ParkingLot)

set(SOURCE_FILES
    Driver.cpp
    ParkingApi.cpp
)

set(HEADER_FILES
    dataUtil.hpp
)

add_subdirectory(Vehicle)
add_subdirectory(ParkingSpot)
add_subdirectory(Ticket)

add_executable(ParkingLot ${SOURCE_FILES})
target_link_libraries(ParkingLot Vehicle)
target_link_libraries(ParkingLot ParkingSpot)
target_link_libraries(ParkingLot TicketLib)

set_target_properties(Vehicle PROPERTIES LINKER_LANGUAGE CXX)

include_directories(
    ${PROJECT_SOURCE_DIR}  # Include the root directory of the project
    ${PROJECT_SOURCE_DIR}/Vehicle/include
    ${PROJECT_SOURCE_DIR}/ParkingSpot/include
    ${PROJECT_SOURCE_DIR}/Ticket/include
)