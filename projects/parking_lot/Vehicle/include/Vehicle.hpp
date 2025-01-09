# pragma once

#include "dataUtil.hpp"

class Vehicle {
    public:

    Vehicle() = default;

    ~Vehicle() = default;
    
    virtual VehicleType getVehicleType() = 0;

    virtual std::string getVehicleNumber() = 0;

};