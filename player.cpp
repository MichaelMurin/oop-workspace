#include <iostream>
#include "player.h"

using namespace std;

//default constructor
player::player() {
    name = "Player";
    health = 10;
    damage = 1;
}

//constructor that sets data members to given values
player::player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

//deals damage to opponent based on player's damage points
void player::attack(player* opponent, int damage) {
    opponent->takeDamage(damage);
}

//reduces the player's health by a given amount
void player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
    cout << getName() << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

//set name
void player::setName(string name) {
    this->name = name;
}

//get name
string player::getName() {
    return name;
}

//set health
void player::setHealth(int health) {
    this->health = health;
} 

//get health
int player::getHealth() {
    return health;
}

//set damage
void player::setDamage(int damage) {
    this->damage = damage;
}

//get damage
int player::getDamage() {
    return damage;
}