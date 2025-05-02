#include "shape.h"
#include "drawable.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <iostream>

using namespace std;

int main(){
    shape *array[3];
    circle crc(2);
    rectangle rec(3,1);
    triangle tri(4,2);
    array[0] = &crc;
    array[1] = &rec;
    array[2] = &tri;
    for (int i = 0; i < 3; i++) {
        cout << "Area: " << array[i]->area() << endl;
        array[i]->draw();
    }
}