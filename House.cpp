#include "House.h"

House::House() {
    ownerName = "";
    lotNumber = 0;
}

House::House(string ownerName, int lotNumber) {
    this->ownerName = ownerName;
    this->lotNumber = lotNumber;
}

string House::get_owner_name() {
    return ownerName;
}

int House::get_lot_number() {
    return lotNumber;
}

House::~House() {
}