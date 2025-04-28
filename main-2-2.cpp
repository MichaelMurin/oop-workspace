#include "Appliance.h"
#include "TV.h"
#include <iostream>

using namespace std;

int main(){
    TV tv(20, 56);
    cout << boolalpha;
    cout << "The power rating is: " << tv.get_powerRating() << endl;
    cout << "Is the power on?: " << tv.get_isOn() << endl;
    cout << "What is the screen size?: " << tv.getScreenSize() << " inches." << endl;
    tv.set_powerRating(23);
    cout << "The new power rating is: " << tv.get_powerRating() << endl;
    tv.setScreenSize(63);
    cout << "The new volume is: " << tv.getScreenSize() << " inches." << endl;
    tv.turnOn();
    cout << "Is the power on now?: " << tv.get_isOn() << endl;
    cout << "How much power is being consumed?: " << tv.getPowerConsumption() << endl;
}