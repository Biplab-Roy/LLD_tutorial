#include "TwoWheelerParkingSpotManager.hpp"
#include "ParkingSpotFactory.hpp"
#include "dataUtil.hpp"

Status TwoWheelerParkingSpotManager::addParkingSpace(std::string id) {
    parkingSpots.insert({parkingSpots.size(), ParkingSpotFactory::getFactory()->getParkingSpotInstance(id, kTwoWheelerParkingSpot)});
    return kStatusOk;
}