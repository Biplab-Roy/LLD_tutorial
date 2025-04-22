#pragma once

#include "Shapes/IShape.hpp"
#include <unordered_map>
#include <bits/stdc++.h>

#define Callback_t std::function<IShape* (ShapeInfo*)>

class Registry final {
    public:
    static Registry *getRegistry() {
        static Registry *registry = new Registry();
        return registry;
    }

    void registerShape(std::string name, Callback_t callback) {
        constructors[name] = callback;
    }

    Callback_t getCallback(std::string name) {
        return constructors[name];
    }

    private:
    std::unordered_map<std::string, Callback_t> constructors;
};