#include <iostream>
#include "player.h"

using namespace std;

//default constructor
Player::Player() {
    name = "Player";
    health = 10;
    damage = 1;
}

//constructor that sets data members to given values
Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

//deals damage to opponent based on player's damage points
void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

//reduces the player's health by a given amount
void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
    cout << getName() << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

//set name
void Player::setName(string name) {
    this->name = name;
}

//get name
string Player::getName() {
    return name;
}

//set health
void Player::setHealth(int health) {
    this->health = health;
} 

//get health
int Player::getHealth() {
    return health;
}

//set damage
void Player::setDamage(int damage) {
    this->damage = damage;
}

//get damage
int Player::getDamage() {
    return damage;
}