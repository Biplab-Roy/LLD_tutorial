#include <iostream>
#include "defs.hpp"
#include "Registry.hpp"
#include "Constants.hpp"
#include "Shapes/Shape.hpp"
#include "Shapes/Circle.hpp"
#include "Shapes/Cube.hpp"
#include "Shapes/Cylinder.hpp"
#include "Shapes/Rectangle.hpp"
#include "ShapeFactory.hpp"

#define REGISTER_SHAPE(shape, func) Registry::getRegistry()->registerShape(shape, func)

void resigterShapes() {
    REGISTER_SHAPE(CIRCLE_SHAPE, Shape::construct<Circle>);
    REGISTER_SHAPE(CUBE_SHAPE, Shape::construct<Cube>);
    REGISTER_SHAPE(CYLINDER_SHAPE, Shape::construct<Cylinder>);
    REGISTER_SHAPE(RECTANGLE_SHAPE, Shape::construct<Rectangle>);
}

int main() {
    resigterShapes();
    ShapeFactory factory;
    
    ShapeInfo *info                     = new ShapeInfo();
    info->name                          = RECTANGLE_SHAPE;

    info->params[RECTANGLE_WIDTH]               = new Parameter();
    info->params[RECTANGLE_WIDTH]->name         = RECTANGLE_WIDTH;
    info->params[RECTANGLE_WIDTH]->value.f32    = new float(4.0f);

    info->params[RECTANGLE_HEIGHT]               = new Parameter();
    info->params[RECTANGLE_HEIGHT]->name         = RECTANGLE_HEIGHT;
    info->params[RECTANGLE_HEIGHT]->value.f32    = new float(3.0f);

    factory.getShape(info)->draw();
}