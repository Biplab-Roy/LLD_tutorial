#include "Circle.hpp"
#include "../Constants.hpp"

void Circle::create(ShapeInfo* info) {
    this->radius = *(info->params)[CIRCLE_RADIUS]->value.f32;
}

void Circle::draw() {
    printf("Drawing Circle with radius: %f\n", this->radius);
}

float Circle::getArea() {
    return 3.14 * radius * radius;
}