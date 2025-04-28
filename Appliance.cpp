#include "Appliance.h"

Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating){
    this->powerRating = powerRating;
    isOn = false;
}

void Appliance::turnOff(){
    isOn = false;
}

void Appliance::turnOn(){
    isOn = true;
}

int Appliance::get_powerRating(){
    return powerRating;
}

void Appliance::set_powerRating(int powerRating){
    this->powerRating = powerRating;
}

bool Appliance::get_isOn(){
    return isOn;
}

double Appliance::getPowerConsumption(){
    return 0;
}