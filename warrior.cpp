#include "warrior.h"
#include "player.h"
#include <iostream>

using namespace std;

//constructor
Warrior::Warrior(string name, int health, int damage, string weapon):Player(name, health, damage) {
    this->weapon = weapon;
}

//deals damage to opponent based on player's weapon's damage points
void Warrior::swingWeapon(Player* opponent) {
    cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    attack(opponent, getDamage());
} 

//sets weapon
void Warrior::setWeapon(string weapon) {
    this->weapon = weapon;
}

//gets weapon
string Warrior::getWeapon() {
    return weapon;
}