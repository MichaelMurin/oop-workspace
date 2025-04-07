#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"
#include <string>

class Wizard:public Player {
    private:
        int mana;
    public:
        Wizard(); //default constructor

        Wizard(std::string name, int health, int damage, int mana); //constructor

        void castSpell(Player* opponent); //deals damage to opponent based on player's mana points

        int getMana(); //get mana value

        void setMana(int mana); //set mana value
};

#endif //WIZARD_H