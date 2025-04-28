#include "Appliance.h"
#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

using namespace std;

int main() {
    TV tv(23,54);
    Fridge fridge(50,100);
    House house(2);
    cout << house.addAppliance(&tv) << ", " << house.addAppliance(&fridge) << endl;
    cout << "The total power consumption is: " << house.getTotalPowerConsumption() << endl;
}
