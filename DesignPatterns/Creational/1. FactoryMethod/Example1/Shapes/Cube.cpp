#include "Cube.hpp"
#include "../Constants.hpp"

void Cube::create(ShapeInfo* info) {
    this->diameter = *(info->params)[CUBE_DIAMETER]->value.f32;
}

void Cube::draw() {
    printf("Drawing Cube with diameter: %f\n", this->diameter);
}

float Cube::getArea() {
    return diameter * diameter * diameter;
}