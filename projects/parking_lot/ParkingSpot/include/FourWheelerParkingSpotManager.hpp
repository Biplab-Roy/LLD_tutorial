# pragma once

# include "ParkingSpotManager.hpp"

class FourWheelerParkingSpotManager : public ParkingSpotManager {
    public:
    FourWheelerParkingSpotManager() = default;
    ~FourWheelerParkingSpotManager() = default;

    Status addParkingSpace(std::string id);
};