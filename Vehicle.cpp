#include "Vehicle.h"
#include <iostream>
#include <time.h>

//default constructor
Vehicle::Vehicle() {
    ID = 0;
    time(&timeOfEntry);
}

//Constructor
Vehicle::Vehicle(int ID) {
    this->ID = ID;
    time(&timeOfEntry);
}

//Return function for ID
int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {
    return (time(&timeOfExit) - timeOfEntry);
}