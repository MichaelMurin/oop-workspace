#include <iostream>

extern bool is_ascending(int[], int);

int main() {
    int array[3] = {2,3,4};
    std::cout << is_ascending(array, 3) << std::endl;
}