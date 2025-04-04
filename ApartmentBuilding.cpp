#include "Unit.h"
#include "ApartmentBuilding.h"
#include <iostream>

// default constructor allocates capacity for 10 units
ApartmentBuilding::ApartmentBuilding() {
    capacity = 10;
    units = new Unit[10];
}

// constructor for ApartmentBuilding with given capacity
ApartmentBuilding::ApartmentBuilding(int capacity) {
    this->capacity = capacity;
    units = new Unit[capacity];
} 

// returns the maximum number of units allowed
int ApartmentBuilding::get_Capacity() {
    return capacity;
}

// returns the current number of units in the apartment building
int ApartmentBuilding::get_Current_Number_of_Units() {
    return num_units;
}

// returns a dynamic array of the units in the apartment building
Unit* ApartmentBuilding::get_Contents() {
    return units;
}

// returns true and adds unit to the apartment if there is sufficient space
// otherwise returns false
bool ApartmentBuilding::add_Unit(Unit unit) {
    if (num_units != capacity) {
        units[num_units] = unit;
        num_units++;
        return true;
    }
    else {
        return false;
    }
}

// destructor
ApartmentBuilding::~ApartmentBuilding() {
    delete[] units;
}