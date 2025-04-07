#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"
#include <string>

class wizard:public player {
    private:
        int mana;
    public:
        wizard(); //default constructor

        wizard(std::string name, int health, int damage, int mana); //constructor

        void castSpell(player* opponent); //deals damage to opponent based on player's mana points

        int getMana(); //get mana value

        void setMana(int mana); //set mana value
};

#endif //WIZARD_H