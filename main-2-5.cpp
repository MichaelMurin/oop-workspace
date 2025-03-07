#include <iostream>

extern bool is_descending(int[], int);

int main() {
    int array[4] = {5,4,4,0};
    std::cout << is_descending(array, 4) << std::endl;
}