#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    ParkingLot theLot(10);
    while (theLot.getCount() != 10) {
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
                theLot.parkVehicle(Car(ID));
                break;
            case 2:
                theLot.parkVehicle(Bus(ID));
                break;
            case 3:
                theLot.parkVehicle(Motorbike(ID));
                break;
        }
    }
    int removal;
    cout << "Remove a vehicle by inputting its ID: ";
    cin >> removal;
    theLot.unparkVehicle(removal);
}