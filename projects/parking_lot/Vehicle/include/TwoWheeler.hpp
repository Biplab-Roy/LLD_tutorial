#pragma once

#include <string>
#include "Vehicle.hpp"

class TwoWheeler : public Vehicle {
    public:
    TwoWheeler(std::string vehicleNumber) {
        this->vehicleNumber = vehicleNumber;
    }

    ~TwoWheeler() = default;

    VehicleType getVehicleType();

    std::string getVehicleNumber();

    private:
        std::string vehicleNumber;
};