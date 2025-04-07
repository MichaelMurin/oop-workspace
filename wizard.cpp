#include "player.h"
#include "wizard.h"
#include <iostream>

using namespace std;

//default constructor
wizard::wizard():player() {
    setName("Wizard");
    setHealth(10);
    setDamage(2);
    mana = 5;
}

//constructor
wizard::wizard(string name, int health, int damage, int mana):player(name, health, mana) {
    this->mana = mana;
}

//deals damage to opponent based on player's mana points
void wizard::castSpell(player* opponent) {
    cout << getName() << " casts a spell on " << opponent->getName() << ".\n";
    opponent->takeDamage(mana);
}

//get mana value
int wizard::getMana() {
    return mana;
}

//set mana value
void wizard::setMana(int mana) {
    this->mana = mana;
} 