#include "FourWheelerParkingSpotManager.hpp"
#include "ParkingSpotFactory.hpp"
#include "dataUtil.hpp"

Status FourWheelerParkingSpotManager::addParkingSpace(std::string id) {
    parkingSpots.insert({parkingSpots.size(), ParkingSpotFactory::getFactory()->getParkingSpotInstance(id, kFourWheelerParkingSpot)});
    return kStatusOk;
}