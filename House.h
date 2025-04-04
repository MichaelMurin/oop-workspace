#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
    public:
        string ownerName;
        int lotNumber;
        // a default constructor that sets lot number to zero and owner name to an empty string

        House();                     
                
        // a constructor that takes the lot number and house owner name

        House(string ownerName, int lotNumber); 

        // returns the name of the house owner

        string get_owner_name();              
  
        // returns the house's lot number

        int get_lot_number();            

        //destructor - bulldoze that sucker!            

        ~House();
};

#endif