#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot {
    private:
        Vehicle *vehicles;
        int max;
        int amount = 0;
    public:
        ParkingLot(int max); //constructor

        int getCount(); //return amount of parked vehicles

        void parkVehicle(Vehicle vehicle); //parks a vehicle using its pointer

        void unparkVehicle(int ID); //unparks a vehicle using its ID
};

#endif