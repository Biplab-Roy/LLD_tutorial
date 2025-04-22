#pragma once

#include "Shape.hpp"

class Cylinder : public Shape {
    void create(ShapeInfo*);

    void draw();

    float getArea();

    private:
    float radius;
    float height;
};