#include "shape.h"
#include "drawable.h"
#include "circle.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

int main(){
    shape *array[3];
    circle crc1(2);
    rectangle rec1(3,1);
    circle crc2(4);
    array[0] = &crc1;
    array[1] = &rec1;
    array[2] = &crc2;
    for (int i = 0; i < 3; i++) {
        cout << "Area: " << array[i]->area() << endl;
    }
}