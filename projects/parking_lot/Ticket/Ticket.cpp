#include "Ticket.hpp"
#include <iostream>

long long Ticket::nextId = 0;

void Ticket::printTicket() {
    std::cout << "======================== Ticket " << getTicketId() << " ========================" << std::endl;
    std::cout << "Parking Spot: " << getParkingSpot().get()->getSpotId() << std::endl;
    std::cout << "Vehicle No: " << getVehicle().get()->getVehicleNumber() << std::endl;
    const auto arrivalTime = std::chrono::system_clock::to_time_t(getArrivalTime());
    std::cout << "Arrival Time: " << std::ctime(&arrivalTime);
    std::cout << "========================================================" << std::endl;
}