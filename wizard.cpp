#include "player.h"
#include "wizard.h"
#include <iostream>

using namespace std;

//default constructor
Wizard::Wizard():Player() {
    setName("Wizard");
    setHealth(10);
    setDamage(2);
    mana = 5;
}

//constructor
Wizard::Wizard(string name, int health, int damage, int mana):Player(name, health, mana) {
    this->mana = mana;
}

//deals damage to opponent based on player's mana points
void Wizard::castSpell(Player* opponent) {
    cout << getName() << " casts a spell on " << opponent->getName() << ".\n";
    opponent->takeDamage(mana);
}

//get mana value
int Wizard::getMana() {
    return mana;
}

//set mana value
void Wizard::setMana(int mana) {
    this->mana = mana;
} 