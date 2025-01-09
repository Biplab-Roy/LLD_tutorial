# pragma once

# include <unordered_map>
# include <string.h>
# include <memory>
# include "Vehicle/include/Vehicle.hpp"
# include "ParkingSpotFactory.hpp"

class ParkingSpotManager
{
protected:
    std::unordered_map<int, std::shared_ptr<ParkingSpot>> parkingSpots;

public:
    ParkingSpotManager() = delete;
    ~ParkingSpotManager() = delete;

    virtual Status addParkingSpace(int id) = 0;

    int findParkingSpace();

    Status removeParkingSpace(int id);

    Status reserveParkingSpot(int parkingSpot);

    Status freeParkingSpot(int parkingSpot);

    Status blockParkingSpot(int parkingSpot);
};
