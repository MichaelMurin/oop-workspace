#include "warrior.h"
#include "player.h"
#include <iostream>

using namespace std;

//constructor
warrior::warrior(string name, int health, int damage, string weapon):player(name, health, damage) {
    this->weapon = weapon;
}

//deals damage to opponent based on player's weapon's damage points
void warrior::swingWeapon(player* opponent) {
    cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    attack(opponent, getDamage());
} 

//sets weapon
void warrior::setWeapon(string weapon) {
    this->weapon = weapon;
}

//gets weapon
string warrior::getWeapon() {
    return weapon;
}