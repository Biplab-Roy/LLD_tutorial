# pragma once

enum Status {
    kStatusError,
    kStatusOk
};

enum SpotType {
    kTwoWheelerParkingSpot,
    kFourWheelerParkingSpot
};

enum VehicleType {
    twoWheeler,
    fourWheeler
};

#define ENSURE(cond, return_error)    do { if(!(cond)) { return return_error; } } while (0)                         