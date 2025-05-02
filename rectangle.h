#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include <iostream>

class rectangle: public shape{
    private:
        double length;
        double breadth;
    public:
        rectangle();

        rectangle(double length, double breadth);

        double area() override;

        void draw() const override{
            std::cout << "Drawing a rectangle." << std::endl;
        };
};

#endif