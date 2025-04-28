#include "Appliance.h"
#include "Fridge.h"
#include <iostream>

using namespace std;

int main(){
    Fridge fridge(50, 100);
    cout << boolalpha;
    cout << "The power rating is: " << fridge.get_powerRating() << endl;
    cout << "Is the power on?: " << fridge.get_isOn() << endl;
    cout << "What is the volume?: " << fridge.getVolume() << " litres." << endl;
    fridge.set_powerRating(60);
    cout << "The new power rating is: " << fridge.get_powerRating() << endl;
    fridge.setVolume(120);
    cout << "The new volume is: " << fridge.getVolume() << " litres." << endl;
    fridge.turnOn();
    cout << "Is the power on now?: " << fridge.get_isOn() << endl;
}