#include "Motorbike.h"
#include "Vehicle.h"

Motorbike::Motorbike(int ID):Vehicle(ID) {
}

int Motorbike::getParkingDuration() {
    return (Vehicle::getParkingDuration() * 0.85);
}