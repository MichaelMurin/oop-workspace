#include <iostream>

extern int num_count(int[], int, int); //linking function to main

int main() {
    int array[6] = {2, 3, 1, 4, 1, 4};
    std::cout << "The number of times 1 appears is: " << num_count(array, 6, 1) << std::endl;
    return 0;
}