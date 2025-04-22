#include "Cylinder.hpp"
#include "../Constants.hpp"

void Cylinder::create(ShapeInfo* info) {
    this->radius = *(info->params)[CYLINDER_RADIUS]->value.f32;
    this->height = *(info->params)[CYLINDER_HEIGHT]->value.f32;
}

void Cylinder::draw() {
    printf("Drawing Cylinder with radius: %f, height: %f\n", this->radius, this->height);
}

float Cylinder::getArea() {
    return 3.14 * radius * radius * height;
}