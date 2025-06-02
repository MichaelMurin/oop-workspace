#include "Utils.h"
#include <iostream>
#include <tuple>

using namespace std;

int main() {
    srand(time(0));
    Utils utility;
    tuple<int, int> pos1 = utility.generateRandomPos(10, 10);
    tuple<int, int> pos2 = utility.generateRandomPos(10, 10);
    double distance = utility.calculateDistance(pos1, pos2);
    cout << "Point 1: " << get<0>(pos1) << ", " << get<1>(pos1) << "\nPoint 2: " <<
    get<0>(pos2) << ", " << get<1>(pos2) << "\nThe distance between the two points is: " << distance << endl;
}