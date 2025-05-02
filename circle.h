#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <iostream>

class circle: public shape{
    private:
        double radius;
    public:
        circle();

        circle(double radius);

        double area() override;

        void draw() const override {std::cout << "Drawing a circle." << std::endl;};
};

#endif