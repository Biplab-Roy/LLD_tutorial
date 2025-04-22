#pragma once

#include "ShapeFactory.hpp"

class ShapeFactory3D : public ShapeFactory {
    public:
    IShape* getShape(ShapeInfo *info) {
        return Registry::getRegistry()->getCallback(info->type, info->name)(info);
    }
};