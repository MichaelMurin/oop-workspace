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
void ParkingLot::parkVehicle(Vehicle vehicle) {
    if (amount != max) {
        vehicles[amount] = vehicle;
        amount++;
    }
    else {
        std::cout << "The lot is full." << std::endl;
    }
}

//unparks a vehicle using its ID
void ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < amount; i++) {
        if (vehicles[i].getID() == ID) {
            vehicles[i] = 0;
            return;
        }
    }
    std::cout << "Vehicle not found in the lot." << std::endl;
}