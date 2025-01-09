# pragma once

#include <string>
#include "Vehicle.hpp"

class FourWheeler : public Vehicle {
    public:

    FourWheeler(std::string vehicleNumber) {
        this->vehicleNumber = vehicleNumber;
    }

    ~FourWheeler() = default;

    VehicleType getVehicleType();

    std::string getVehicleNumber();

    private:
        std::string vehicleNumber;
};