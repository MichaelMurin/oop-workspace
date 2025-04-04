#include <iostream>
#include "House.h"
#include "Subdivision.h"
using namespace std;

int main() {
    Subdivision theSuburb = Subdivision("Berryton",6);
    House first = House("Steve",50);
    House second = House("Jacob",14);
    House third = House("Maria",23);
    House fourth = House("Alice",27);
    House fifth = House();
    House sixth = House("Beep borb", 1000);
    theSuburb.add_House(first);
    theSuburb.add_House(second);
    theSuburb.add_House(third);
    theSuburb.add_House(fourth);
    theSuburb.add_House(fifth);
    theSuburb.add_House(sixth);
    House *array = theSuburb.get_Houses();
    cout << theSuburb.get_subdiv_name() << " " << theSuburb.get_num_houses() << endl;
    for (int i = 0; i < theSuburb.get_num_houses(); i++) {
        cout << array[i].get_owner_name() << " " << array[i].get_lot_number() << endl;
    }
    return 0;
}