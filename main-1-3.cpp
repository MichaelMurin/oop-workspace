#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    Vehicle vehicle;
    Vehicle *ptr;
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
                vehicle = Car(ID);
                break;
            case 2:
                vehicle = Bus(ID);
                break;
            case 3:
                vehicle = Motorbike(ID);
                break;
        }
        ptr = &vehicle;
        theLot.parkVehicle(ptr);
    }
    cout << "The number of overstaying vehicles are: " << theLot.countOverstayingVehicles(15) << endl;
}