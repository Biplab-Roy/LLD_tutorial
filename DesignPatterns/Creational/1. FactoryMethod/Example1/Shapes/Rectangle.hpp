#pragma once

#include "Shape.hpp"

class Rectangle : public Shape {
    void create(ShapeInfo*);

    void draw();

    float getArea();

    private:
    float height;
    float width;
};