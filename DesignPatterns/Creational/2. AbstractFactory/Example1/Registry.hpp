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

    void registerShape(std::string type, std::string name, Callback_t callback) {
        constructors[type][name] = callback;
        printf("[+] Registered Shape Type: %s, Shape Name: %s\n", type.c_str(), name.c_str());
    }

    Callback_t getCallback(std::string type, std::string name) {
        return constructors[type][name];
    }

    private:
    std::unordered_map<std::string, std::unordered_map<std::string, Callback_t>> constructors;
};