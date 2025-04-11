#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <time.h>

class Vehicle {
    private:
        time_t timeOfEntry;
        time_t timeOfExit;
        int ID;
    public:
        Vehicle(); //Default Constructor

        Vehicle(int ID); //Constructor

        int getID(); //Return function for ID

        int getParkingDuration(); //return time vehicle has been in parking
};

#endif