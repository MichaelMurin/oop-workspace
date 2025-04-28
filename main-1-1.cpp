#include <iostream>
#include "Appliance.h"

using namespace std;

int main(){
    Appliance noObject(10);
    cout << boolalpha;
    cout << "The power rating is: " << noObject.get_powerRating() << endl;
    cout << "Is the power on?: " << noObject.get_isOn() << endl;
    noObject.set_powerRating(12);
    cout << "The new power rating is: " << noObject.get_powerRating() << endl;
    noObject.turnOn();
    cout << "Is the power on now?: " << noObject.get_isOn() << endl;
}