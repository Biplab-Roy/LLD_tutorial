# pragma once

# include "ParkingSpot.hpp"
# include "dataUtil.hpp"

class FourWheelerParkingSpot : public ParkingSpot {
public:
    FourWheelerParkingSpot(std::string id) : ParkingSpot(id, kFourWheelerParkingSpot) {};

    int price();
};