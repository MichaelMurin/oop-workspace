#include <iostream>

extern int array_sum(int[], int);

int main() {
    int array[5] = {4, 2, 1, 6, 7};
    std::cout << "The sum of elements is: " << array_sum(array, 5) << std::endl;
}