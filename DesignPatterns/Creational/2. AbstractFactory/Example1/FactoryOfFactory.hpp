#pragma once

#include "Constants.hpp"
#include "ShapeFactory2D.hpp"
#include "ShapeFactory3D.hpp"

class FactoryOfFactory final {
    private:
        FactoryOfFactory() {};
        FactoryOfFactory(FactoryOfFactory&) {};
        static ShapeFactory* shapeFactory2d;
        static ShapeFactory* shapeFactory3d;

    public:
        // Factory of Factory of Shape
        static ShapeFactory* getShapeFactory(std::string type) {
            if(type == SHAPE2D) return shapeFactory2d;
            else if(type == SHAPE3D) return shapeFactory3d;
            return nullptr;
        }
};

ShapeFactory* FactoryOfFactory::shapeFactory2d = new ShapeFactory2D();
ShapeFactory* FactoryOfFactory::shapeFactory3d = new ShapeFactory3D();
