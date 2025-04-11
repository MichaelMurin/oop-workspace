#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike:public Vehicle {
    public:
        Motorbike(int ID); //constructor

        int getParkingDuration(); //returns time in seconds.
};

#endif