#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"
#include <string>
using namespace std;

class House {
    private:
        Appliance** appliances;
        int numAppliances;
        int totalAppliances = 0;
    public:
        House(); //creates an empty house object
        House(int numAppliances); //creates a house object with space for numAppliances appliances
        bool addAppliance(Appliance* appliance); //adds an appliance object to house and returns true if space in object
        //otherwise false
        double getTotalPowerConsumption(); //returns total power consumption of all appliances in house
        ~House(); //destructor
};

#endif