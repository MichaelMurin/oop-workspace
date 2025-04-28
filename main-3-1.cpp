#include "Appliance.h"
#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

using namespace std;

int main() {
    TV *tvPtr = new TV();
    Fridge *fridgePtr = new Fridge();
    House house(2);
    cout << house.addAppliance(tvPtr) << ", " << house.addAppliance(fridgePtr) << endl;
    cout << "The total power consumption is: " << house.getTotalPowerConsumption() << endl;
    delete tvPtr;
    delete fridgePtr;
    tvPtr = nullptr;
    fridgePtr = nullptr;
    house.~House();
}
