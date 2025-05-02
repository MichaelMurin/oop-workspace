#include "rectangle.h"
#include <iostream>

rectangle::rectangle(){
    breadth = 1;
    length = 1;
}

rectangle::rectangle(double length, double breadth){
    this->length = length;
    this->breadth = breadth;
}

double rectangle::area(){
    return length*breadth;
}