#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"
#include <iostream>

class triangle: public shape{
    private:
        double base;
        double height;
    public:
        triangle();

        triangle(double base, double height);

        double area() override;

        void draw() const override{
            std::cout << "Drawing a triangle." << std::endl;
        };
};

#endif