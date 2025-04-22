#pragma once

#include "defs.hpp"
#include "Registry.hpp"

class ShapeFactory {
    public:
    virtual IShape* getShape(ShapeInfo *info) = 0;
};