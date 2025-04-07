#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    private:
        std::string name;
        int health;
        int damage;

    public:
        Player(); //default constructor

        Player(std::string name, int health, int damage); //constructor that sets data members to given values

        void attack(Player* opponent, int damage); //deals damage to opponent based on player's damage points

        void takeDamage(int damage); //reduces the player's health by a given amount

        void setName(std::string name); //set name

        std::string getName(); //get name

        void setHealth(int health); //set health

        int getHealth(); //get health

        void setDamage(int damage); //set damage

        int getDamage(); //get damage
};

#endif //PLAYER_H