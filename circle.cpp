#include "circle.h"
#include <cmath>
#include <iostream>

circle::circle(){
    radius = 1;
}

circle::circle(double radius){
    this->radius = radius;
}

double circle::area(){
    const double pi = 3.14159265358979323846;
    return pi*radius*radius;
}