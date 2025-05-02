#ifndef SHAPE_H
#define SHAPE_H
#include "drawable.h"
#include <iostream>

class shape: public drawable{
    public:
        virtual double area() = 0;

        virtual void draw() const override {
            std::cout << "Drawing a shape." << std::endl;
        };
};

#endif