#include "triangle.h"
#include <iostream>

triangle::triangle(){
    height = 1;
    base = 1;
}

triangle::triangle(double base, double height){
    this->base = base;
    this->height = height;
}

double triangle::area(){
    return (base*height)/2;
}