add_library(libShapes SHARED
    Circle.cpp
    Cube.cpp
    Cylinder.cpp
    Rectangle.cpp
    Shape.hpp
)

target_include_directories(libShapes PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
