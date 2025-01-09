add_library(libTicket SHARED
    Ticket.cpp
)

target_include_directories(libTicket PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(
    ${PROJECT_SOURCE_DIR}  # Include the root directory of the project
    ${PROJECT_SOURCE_DIR}/Ticket/include
)