#include <iostream>
#include "Unit.h"

using namespace std;

int main() {
    Unit emptyUnit = Unit();
    Unit unit01 = Unit(500,2,30);
    cout << "The first unit is worth $" << unit01.get_Value() << ", has " <<
    unit01.get_Num_Bedrooms() << " bedrooms and a size of " << unit01.get_Area() << "m^2." << endl;
    return 0;
}