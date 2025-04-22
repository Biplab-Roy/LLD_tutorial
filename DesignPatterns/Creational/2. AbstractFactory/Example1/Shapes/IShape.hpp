#pragma once

#include "../defs.hpp"

class IShape {
    public:
    virtual void create(ShapeInfo*) = 0;
    
    virtual void draw() = 0;

    virtual float getArea() = 0;
};