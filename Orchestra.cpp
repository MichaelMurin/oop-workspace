#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra() {
    this->size = 0;
    this->numMembers = 0;
    this->members = new Musician[size];
}

Orchestra::Orchestra(int size) {
    this->size = size;
    this->numMembers = 0;
    this->members = new Musician[size];
    for (int i = 0; i < size; i++) {
        this->members[i] = Musician();
    }
}

int Orchestra::get_current_number_of_members() {
    return numMembers;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < numMembers; i++) {
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

Musician *Orchestra::get_members() {
    return members;
}
bool Orchestra::add_musician(Musician new_musician) {
    if (numMembers != size) {
        members[numMembers] = new_musician;
        numMembers++;
        return true;
    }
    else {
        return false;
    }
}

Orchestra::~Orchestra() {
    delete[] members;
}