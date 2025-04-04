#include "House.h"
#include "Subdivision.h"

// default constructor - subdivision name is an empty string, size (num houses) is zero

Subdivision::Subdivision() {
    subName = "";
    num_houses = 0;
    current_num_houses = 0;
    houses = new House[0];
}     

// constructor with given subdivision size and subdivision name                       

Subdivision::Subdivision(string subName, int num_houses) {
    this->subName = subName;
    this->num_houses = num_houses;
    current_num_houses = 0;
    houses = new House[num_houses];
}

// returns the number of houses currently built on the the subdivision

int Subdivision::get_num_houses() {
    return current_num_houses;
}

// returns the subdivision's name

string Subdivision::get_subdiv_name() {
    return subName;
} 

// returns the array of houses currently on the subdivision

House * Subdivision::get_Houses() {
    return houses;
}       

// if the subdivision is not full (current number of houses less than the maximum 
// number of houses) returns true and adds new house to the subdivision 
// otherwise returns false
//
// Note that houses may be added in any order (not by lot number).

bool Subdivision::add_House(House new_house) {
    if (current_num_houses != num_houses) {
        houses[current_num_houses] = new_house;
        current_num_houses++;
        return true;
    }
    else {
        return false;
    }
}

// bulldoze the whole subdivision and its houses

Subdivision::~Subdivision() {
    delete[] houses;
}