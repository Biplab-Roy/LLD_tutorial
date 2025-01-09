#pragma once

# include "ParkingSpotManager.hpp"

class TwoWheelerParkingSpotManager : public ParkingSpotManager {
    public:
    TwoWheelerParkingSpotManager() = default;
    ~TwoWheelerParkingSpotManager() = default;
    Status addParkingSpace(std::string id);
};