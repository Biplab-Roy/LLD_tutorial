#include "ParkingSpotManager.hpp"

int ParkingSpotManager::findParkingSpace() {
    for(auto parkingSpot : parkingSpots) {
        if(parkingSpot.second.get()->isAvailable()) return parkingSpot.first;
    }
    return -1;
}

Status ParkingSpotManager::removeParkingSpace(int id) {
    if(parkingSpots.find(id) != parkingSpots.end()) {
        parkingSpots.erase(id);
        return kStatusOk;
    }
    return kStatusError;
}

Status ParkingSpotManager::reserveParkingSpot(int id) {
    ENSURE(parkingSpots.find(id) != parkingSpots.end(), kStatusError);
    ENSURE(parkingSpots[id].get()->isAvailable() == true, kStatusError);
    parkingSpots[id].get()->reserveParkingSpot();
    return kStatusOk;
}

Status ParkingSpotManager::freeParkingSpot(int id) {
    ENSURE(parkingSpots.find(id) != parkingSpots.end(), kStatusError);
    ENSURE(parkingSpots[id].get()->isAvailable() == false, kStatusError);
    parkingSpots[id].get()->freeParkingSpot();
    return kStatusOk;
}

Status ParkingSpotManager::blockParkingSpot(int id) {
    ENSURE(parkingSpots.find(id) != parkingSpots.end(), kStatusError);
    ENSURE(parkingSpots[id].get()->isAvailable() == true, kStatusError);
    parkingSpots[id].get()->blockParkingSpot();
    return kStatusOk;
}