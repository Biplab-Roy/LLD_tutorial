#include "ParkingSpot.hpp"

bool ParkingSpot::isAvailable() {
    return isEmpty && !isBlocked;
}

Status ParkingSpot::reserveParkingSpot() {
    if(isAvailable()) {
        isEmpty = false;
        return kStatusOk;
    }
    return kStatusError;
}

Status ParkingSpot::freeParkingSpot() {
    if(!isBlocked) {
        isEmpty = true;
        return kStatusOk;
    }
    return kStatusError;
}

Status ParkingSpot::blockParkingSpot() {
    ENSURE(isEmpty == true, kStatusError);
    ENSURE(isBlocked == false, kStatusError);
    isBlocked = true;
    return kStatusOk;
}