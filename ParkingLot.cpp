#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>

//constructor
ParkingLot::ParkingLot(int max) {
    this->max = max;
    vehicles = new Vehicle[max];
}

//return amount of parked vehicles
int ParkingLot::getCount() {
    return amount;
} 

//parks a vehicle using its pointer
void ParkingLot::parkVehicle(Vehicle *vehicle) {
    if (amount < max) {
        vehicles[amount] = *vehicle;
        amount++;
    }
    else {
        std::cout << "The lot is full" << std::endl;
    }
}

//unparks a vehicle using its ID
void ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < amount; i++) {
        if (vehicles[i].getID() == ID) {
            vehicles[i] = Vehicle();
            amount--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot\n" << std::endl;
}

//counts number of vehicles that have stayed for too long
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int overstayed = 0;
    for (int i = 0; i < amount; i++) {
        if (vehicles[i].getParkingDuration() > maxParkingDuration) {
            overstayed++;
        }
    }
    return overstayed;
} 