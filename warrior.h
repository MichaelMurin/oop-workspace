#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include "player.h"

class warrior:public player {
    private:
        std::string weapon;
    public:
        warrior(); //default constructor

        warrior(std::string name, int health, int damage, std::string weapon); //constructor

        void swingWeapon(player* opponent); //deals damage to opponent based on player's weapon's damage points

        void setWeapon(std::string weapon); //sets weapon

        std::string getWeapon(); //gets weapon
};

#endif //WARRIOR_H