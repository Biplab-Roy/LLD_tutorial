#pragma once

#include "Shape.hpp"

class Cube : public Shape {

    void create(ShapeInfo*);

    void draw();

    float getArea();

    private:
    float diameter;
};