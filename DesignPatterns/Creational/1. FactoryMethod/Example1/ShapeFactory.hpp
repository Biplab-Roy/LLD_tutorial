#pragma once

#include "defs.hpp"
#include "Registry.hpp"

class ShapeFactory {
    public:
    IShape* getShape(ShapeInfo *info) {
        return Registry::getRegistry()->getCallback(info->name)(info);
    }
};