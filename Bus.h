#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus:public Vehicle {
    public:
        Bus(int ID); //constructor

        int getParkingDuration(); //returns time in seconds.
};

#endif