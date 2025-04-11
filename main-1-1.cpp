#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"

using namespace std;

int main() {
    int num = 0;
    cout << "How many vehicles?: ";
    cin >> num;
    Vehicle *list = new Vehicle[num];
    for (int i = 0; i < num; i++) {
        int type = 0;
        int ID = 0;
        cout << "What kind of vehicle?:\n1 = Car\n2 = Bus\n3 = Motorbike\n";
        cin >> type;
        while (type != 1 && type != 2 && type != 3) {
            cout << "Please input a valid number: ";
            cin >> type;
        }
        cout << "What is the ID?: ";
        cin >> ID;
        switch(type) {
            case 1:
                list[i] = Car(ID);
                break;
            case 2:
                list[i] = Bus(ID);
                break;
            case 3:
                list[i] = Motorbike(ID);
                break;
        }
    }

    for (int i = 0; i < num; i++) {
        cout << "Vehicle " << i << ": " << list[i].getParkingDuration() << endl;
    }
}