#include <iostream>
#include "Vehicle.hpp"
#include "FourWheeler.hpp"
#include "TwoWheeler.hpp"
#include "ParkingSpot.hpp"
#include "FourWheelerParkingSpot.hpp"
#include "FourWheelerParkingSpot.hpp"
#include "FourWheelerParkingSpotManager.hpp"
#include "TwoWheelerParkingSpotManager.hpp"
#include "Ticket.hpp"
#include <memory>

int main(int argc, char const *argv[])
{
    /*
    std::shared_ptr<Vehicle> v1 = std::make_shared<FourWheeler>("WB07G1598");
    std::shared_ptr<Vehicle> v2 = std::make_shared<TwoWheeler>("WB07G1599");
    std::cout << "Hello World " << (v1.get()->getVehicleType() == fourWheeler) << " " << (v1.get()->getVehicleNumber()) << std::endl;
    std::cout << "Hello World " << (v2.get()->getVehicleType() == fourWheeler) << " " << (v2.get()->getVehicleNumber()) << std::endl;
    
    ParkingSpot parkingSpot = FourWheelerParkingSpot("PS01");
    std::cout << "ParkingSpot " << parkingSpot.getSpotId() << " Available: " << parkingSpot.isAvailable() << std::endl;

    std::cout << "Reserved: " << parkingSpot.reserveParkingSpot() << std::endl;
    parkingSpot.freeParkingSpot();
    std::cout << "Reserved: " << parkingSpot.reserveParkingSpot() << std::endl;

    std::cout << "ParkingSpot " << parkingSpot.getSpotId() << " Available: " << parkingSpot.isAvailable() << std::endl;
    */

    std::vector<std::string> twoWheelersSpotId = {"T01", "T02"};
    std::vector<std::string> fourWheelersSpotId = {"F01", "F02", "F03"};
    FourWheelerParkingSpotManager manager2;
    TwoWheelerParkingSpotManager manager1;

    for(auto &id : twoWheelersSpotId) {
        manager1.addParkingSpace(id);
    }

    for(auto &id : fourWheelersSpotId) {
        manager2.addParkingSpace(id);
    }

    auto spot1 = manager1.findParkingSpace();
    manager1.reserveParkingSpot(spot1);
    std::shared_ptr<Vehicle> v1 = std::make_shared<TwoWheeler>("V01");
    // Generate ticket spot1, v1
    std::cout << spot1.get()->getSpotId() << std::endl;

    auto spot2 = manager1.findParkingSpace();
    manager1.reserveParkingSpot(spot2);
    std::shared_ptr<Vehicle> v2 = std::make_shared<TwoWheeler>("V02");
    // Generate ticket spot2, v2
    std::cout << spot2.get()->getSpotId() << std::endl;

    auto spot3 = manager1.findParkingSpace();
    manager1.reserveParkingSpot(spot3);
    std::shared_ptr<Vehicle> v3 = std::make_shared<TwoWheeler>("V03");
    // Generate ticket spot3, v3
    if(spot3 != nullptr)
    std::cout << spot3.get()->getSpotId() << std::endl;

    manager1.freeParkingSpot(spot1);

    spot3 = manager1.findParkingSpace();

    manager1.reserveParkingSpot(spot3);
    v3 = std::make_shared<TwoWheeler>("V03");
    // Generate ticket spot3, v3
    if(spot3 != nullptr)
    std::cout << spot3.get()->getSpotId() << std::endl;

    Ticket ticket(spot3, v3);
    ticket.printTicket();

    return 0;
}
