#include "Unit.h"
#include <iostream>

// a default constructor 
Unit::Unit() {
    unit_val = 0;
    num_beds = 0;
    unit_size = 0;
}
// a constructor that takes: the value, number of bedrooms, and the size
Unit::Unit(int unit_val, int num_beds, double unit_size) {
    this->unit_val = unit_val;
    this->num_beds = num_beds;
    this->unit_size = unit_size;
}   

// returns the number of bedrooms for the unit
int Unit::get_Num_Bedrooms() {
    return num_beds;
}

// returns the value in dollars of the Unit
int Unit::get_Value() {
    return unit_val;
}

// returns the number of square meters in the unit
double Unit::get_Area() {
    return unit_size;
} 