#include "House.h"
#include "Appliance.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

//creates an empty house object
House::House(){
    numAppliances = 0;
}
//creates a house object with space for numAppliances appliances
House::House(int numAppliances){
    this->numAppliances = numAppliances;
    appliances = new Appliance *[numAppliances];
}
//adds an appliance object to house and returns true if space in object, otherwise false
bool House::addAppliance(Appliance* appliance){
    if (totalAppliances < numAppliances) {
        appliances[totalAppliances] = appliance;
        totalAppliances++;
        return true;
    } else {
        return false;
    }
}
//returns total power consumption of all appliances in house
double House::getTotalPowerConsumption(){
    double totalPowerConsumption = 0;
    for (int i = 0; i < totalAppliances; i++) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}

House::~House(){
    delete appliances;
}