#include <iostream>
#include <cmath>

extern bool is_fanarray(int[], int);

int main() {
    int array[4] = {2,3,3,2};
    std::cout << is_fanarray(array, 4) << std::endl;
}