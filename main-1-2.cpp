#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"

using namespace std;

int main() {
    ApartmentBuilding newBuilding = ApartmentBuilding(4);
    cout << "The new building allows for " << newBuilding.get_Capacity() << " units." << endl;
    newBuilding.add_Unit(Unit(500,2,30)); 
    newBuilding.add_Unit(Unit());
    newBuilding.add_Unit(Unit(700,2,50));
    cout << "There are currently " << newBuilding.get_Current_Number_of_Units() << " units in the building." << endl;
    Unit *array = newBuilding.get_Contents();
    for (int i = 0; i < newBuilding.get_Current_Number_of_Units(); i++) {
        cout << "Unit " << i+1 << ":" << endl
        << "Value: $" << array[i].get_Value() << endl
        << "Number of Bedrooms: " << array[i].get_Num_Bedrooms() << endl
        << "Unit Size: " << array[i].get_Area() << " m^2" << endl;
    }
    newBuilding.~ApartmentBuilding();
    return 0;
}