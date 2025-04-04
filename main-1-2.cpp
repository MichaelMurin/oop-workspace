#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"

using namespace std;

int main() {
    ApartmentBuilding newBuilding = ApartmentBuilding(4);
    cout << "The new building allows for " << newBuilding.get_Capacity() << " units." << endl;
    Unit u01 = Unit(500,2,30);
    Unit u02 = Unit();
    Unit u03 = Unit(700,2,50);
    newBuilding.add_Unit(u01); 
    newBuilding.add_Unit(u02);
    newBuilding.add_Unit(u03);
    cout << "There are currently " << newBuilding.get_Current_Number_of_Units() << " units in the building." << endl;
    Unit *array = newBuilding.get_Contents();
    for (int i = 0; i < newBuilding.get_Current_Number_of_Units(); i++) {
        cout << "Unit " << i+1 << ": " << array[i].get_Value()
        << " " << array[i].get_Num_Bedrooms() << " " << array[i].get_Area() << endl;
    }
    newBuilding.~ApartmentBuilding();
    return 0;
}