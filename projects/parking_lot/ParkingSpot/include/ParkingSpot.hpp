# pragma once

#include <string>
#include "dataUtil.hpp"

class ParkingSpot {
public:

    ParkingSpot(std::string id, SpotType spotType) 
        : id (id), 
        spotType (spotType), 
        isEmpty (true), 
        isBlocked (false) {};

    ~ParkingSpot() = default;

    bool isAvailable();

    Status reserveParkingSpot();

    Status freeParkingSpot();

    Status blockParkingSpot();

    std::string getSpotId() { return id; }

private:
    std::string id;
    enum SpotType spotType;
    bool isEmpty;
    bool isBlocked;
};