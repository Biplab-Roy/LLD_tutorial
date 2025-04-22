#include "Rectangle.hpp"
#include "../Constants.hpp"

void Rectangle::create(ShapeInfo* info) {
    this->height = *(info->params)[RECTANGLE_HEIGHT]->value.f32;
    this->width = *(info->params)[RECTANGLE_WIDTH]->value.f32;
}

void Rectangle::draw() {
    printf("Drawing Rectangle with width: %f, height: %f\n", this->width, this->height);
}

float Rectangle::getArea() {
    return height * width;
}