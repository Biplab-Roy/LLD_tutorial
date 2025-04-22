cmake_minimum_required(VERSION 3.28.3)
Project(DrawShape)

set(SOURCE_FILES
    defs.hpp
    Constants.hpp
    Registry.hpp
    ShapeFactory.hpp
    Main.cpp
)

add_subdirectory(Shapes)

add_executable(DrawShape ${SOURCE_FILES})
target_link_libraries(DrawShape libShapes)