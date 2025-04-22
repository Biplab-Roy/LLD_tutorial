#pragma once

#include "Shape.hpp"

class Circle : public Shape {
    void create(ShapeInfo*);

    void draw();

    float getArea();

    private:
    float radius;
};