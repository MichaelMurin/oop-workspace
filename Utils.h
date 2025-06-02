#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>
#include <cmath>
#include <ctime>

class Utils{
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
            std::tuple<int, int> randomPos = std::make_tuple(rand() % gridWidth, rand() % gridHeight);
            return randomPos;
        };

        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
            double x = pow((std::get<0>(pos1) - std::get<0>(pos2)),2);
            double y = pow((std::get<1>(pos1) - std::get<1>(pos2)),2);
            double sum = sqrt(x + y);
            return sum;
        };
};

#endif