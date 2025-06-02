#include "Ship.h"
#include "Mine.h"
#include <iostream>
#include <tuple>

using namespace std;

int main() {
    Ship ship(rand() % 10,rand() % 10);
    Mine mine(1,1);
    cout << "Ship at: " << get<0>(ship.getPos()) << ", " << get<1>(ship.getPos()) << "\nMine at: " <<
    get<0>(mine.getPos()) << ", " << get<1>(mine.getPos()) << endl;
    ship.move(1,1);
    cout << "Ship now at: " << get<0>(ship.getPos()) << ", " << get<1>(ship.getPos()) << endl;
    Explosion explosion = mine.explode();
    explosion.apply(ship);
    cout << "Kaboom! The ship is now at: " << get<0>(ship.getPos()) << ", " << get<1>(ship.getPos()) << endl;
}