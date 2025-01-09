#pragma once

#include "dataUtil.hpp"
#include "Ticket/include/Ticket.hpp"
#include "ParkingSpot/include/TwoWheelerParkingSpotManager.hpp"
#include "ParkingSpot/include/FourWheelerParkingSpotManager.hpp"

class Entrance {
    public:

    Status findParking(VehicleType vehicleType, std::string &parkingSpot);

    Status generateTicket(Vehicle *vehicle, std::string &parkingSpotId, Ticket **ticket);

    Status blockParking(std::string &parkingSpotId);

    private:
    TwoWheelerParkingSpotManager twoWheelerParkingSpotManager;
    FourWheelerParkingSpotManager fourWheelerParkingSpotManager;
};