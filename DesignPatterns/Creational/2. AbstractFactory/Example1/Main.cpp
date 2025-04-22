#include <iostream>
#include "defs.hpp"
#include "Registry.hpp"
#include "Constants.hpp"
#include "Shapes/Shape.hpp"
#include "Shapes/Circle.hpp"
#include "Shapes/Cube.hpp"
#include "Shapes/Cylinder.hpp"
#include "Shapes/Rectangle.hpp"
#include "FactoryOfFactory.hpp"

#define REGISTER_SHAPE(type, shape, func) Registry::getRegistry()->registerShape(type, shape, func)

void registerShapes() {
    REGISTER_SHAPE(SHAPE2D, CIRCLE_SHAPE, Shape::construct<Circle>);
    REGISTER_SHAPE(SHAPE3D, CUBE_SHAPE, Shape::construct<Cube>);
    REGISTER_SHAPE(SHAPE3D, CYLINDER_SHAPE, Shape::construct<Cylinder>);
    REGISTER_SHAPE(SHAPE2D, RECTANGLE_SHAPE, Shape::construct<Rectangle>);
}

int main() {
    registerShapes();
    
    ShapeInfo *info                     = new ShapeInfo();
    info->name                          = RECTANGLE_SHAPE;
    info->type                          = SHAPE2D;

    info->params[RECTANGLE_WIDTH]               = new Parameter();
    info->params[RECTANGLE_WIDTH]->name         = RECTANGLE_WIDTH;
    info->params[RECTANGLE_WIDTH]->value.f32    = new float(4.0f);

    info->params[RECTANGLE_HEIGHT]               = new Parameter();
    info->params[RECTANGLE_HEIGHT]->name         = RECTANGLE_HEIGHT;
    info->params[RECTANGLE_HEIGHT]->value.f32    = new float(3.0f);

    FactoryOfFactory::getShapeFactory(info->type)->getShape(info)->draw();
}