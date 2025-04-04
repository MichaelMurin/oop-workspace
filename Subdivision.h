#ifndef SUBDIVISON_H
#define SUBDIVISION_H

#include <string>
#include "House.h"
using namespace std;

class Subdivision {
    public:
        string subName;
        int num_houses;
        int current_num_houses;
        House *houses;

        // default constructor - subdivision name is an empty string, size (num houses) is zero

        Subdivision();        

        // constructor with given subdivision size and subdivision name                       

        Subdivision(string subName, int num_houses);  

        // returns the number of houses currently built on the the subdivision

        int get_num_houses(); 

        // returns the subdivision's name

        string get_subdiv_name();  

        // returns the array of houses currently on the subdivision

        House * get_Houses();           

        // if the subdivision is not full (current number of houses less than the maximum 
        // number of houses) returns true and adds new house to the subdivision 
        // otherwise returns false

        // Note that houses may be added in any order (not by lot number).

        bool add_House(House new_house);

        // bulldoze the whole subdivision and its houses

        ~Subdivision(); // destructor
};

#endif