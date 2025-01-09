#pragma once

# include <string>
# include "ParkingSpot.hpp"
# include <memory>
# include "dataUtil.hpp"
# include "TwoWheelerParkingSpot.hpp"
# include "FourWheelerParkingSpot.hpp"

class ParkingSpotFactory {
private:
    ParkingSpotFactory() = default;
public:
    ParkingSpotFactory(ParkingSpotFactory const&) = delete;
    ParkingSpotFactory& operator=(ParkingSpotFactory const&) = delete;
    ParkingSpotFactory(ParkingSpotFactory&&) = delete;
    ParkingSpotFactory& operator=(ParkingSpotFactory&&) = delete;

    static ParkingSpotFactory* getFactory() {
        static ParkingSpotFactory *factory = new ParkingSpotFactory();
        return factory;
    }

    std::shared_ptr<ParkingSpot> getParkingSpotInstance(std::string &id, SpotType spotType) {
        std::shared_ptr<ParkingSpot> parkingSpot;
        switch (spotType)
        {
        case kTwoWheelerParkingSpot:
            parkingSpot = std::make_shared<TwoWheelerParkingSpot>(id);
            break;
        case kFourWheelerParkingSpot:
            parkingSpot = std::make_shared<FourWheelerParkingSpot>(id);
            break;
        default:
            printf("Invalid SpotType\n");
        }
        return parkingSpot;
    }
};