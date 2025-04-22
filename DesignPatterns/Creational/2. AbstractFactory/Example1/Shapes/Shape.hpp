#pragma once

#include "../defs.hpp"
#include "IShape.hpp"

class Shape : public IShape {
    public:
    template <typename T>
    static IShape* construct(ShapeInfo* info) {
        IShape* shape = new T();
        shape->create(info);
        return shape;
    }
    
    virtual void create(ShapeInfo*) = 0;

    virtual void draw() = 0;

    virtual float getArea() = 0;
};