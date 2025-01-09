# pragma once

# include "ParkingSpot.hpp"

class TwoWheelerParkingSpot : public ParkingSpot {
public:
    TwoWheelerParkingSpot(std::string id) : ParkingSpot(id, kTwoWheelerParkingSpot) {};

    int price();
};