#include "Entrance.hpp"

Status Entrance::findParking(VehicleType vehicleType, std::string &parkingSpot) {
    ParkingSpot *freeParkingSpot = nullptr;
    switch(vehicleType) {
        case twoWheeler:
            ParkingSpot *freeParkingSpot = twoWheelerParkingSpotManager.findParkingSpace().get();
        case fourWheeler:
            ParkingSpot *freeParkingSpot = fourWheelerParkingSpotManager.findParkingSpace().get();
        default:
            return kStatusError;
    }
    ENSURE(freeParkingSpot != nullptr, kStatusError);
    parkingSpot = freeParkingSpot->getSpotId();
    return kStatusOk;
}

Status Entrance::blockParking(std::string &parkingSpotId, SpotType parkingSpotType) {
    switch(parkingSpotType) {
        case kTwoWheelerParkingSpot:
            twoWheelerParkingSpotManager.blockParkingSpot()
        case kFourWheelerParkingSpot:
            fourWheelerParkingSpotManager.
        default:
            return kStatusError;
    }
    parkingSpot->blockParkingSpot();
    return kStatusOk;
}

Status Entrance::generateTicket(Vehicle *vehicle, std::string &parkingSpotId, Ticket **ticket) {
    switch(vehicle->getVehicleType()) {
        case twoWheeler:
            *ticket = new Ticket(twoWheelerParkingSpotManager, vehicle);
    }
    
}