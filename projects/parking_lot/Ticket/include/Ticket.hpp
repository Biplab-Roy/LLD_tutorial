#pragma once

#include <chrono>
#include <memory>
#include "ParkingSpot/include/ParkingSpot.hpp"
#include "Vehicle/include/Vehicle.hpp"

class Ticket {

public:
    Ticket(std::string parkingSpotId, Vehicle vehicle) {
        this->vehicle = vehicle;
        this->parkingSpot = parkingSpot;
        this->arrivalTime = std::chrono::system_clock::now();
        this->id = Ticket::nextId++;
    }

    std::shared_ptr<Vehicle> getVehicle() { return vehicle; }

    std::shared_ptr<ParkingSpot> getParkingSpot() { return parkingSpot; }

    std::chrono::time_point<std::chrono::system_clock> getArrivalTime() { return arrivalTime; }

    long long getTicketId() { return id; }

    void printTicket();

private:
    static long long nextId;
    long long id;
    std::chrono::time_point<std::chrono::system_clock> arrivalTime;
    std::shared_ptr<Vehicle> vehicle;
    std::shared_ptr<ParkingSpot> parkingSpot;
};