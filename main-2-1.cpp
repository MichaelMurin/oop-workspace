#include <iostream>

extern int min_element(int[], int);

int main() {
    int array[5] = {2, 5, 0, 4, 3};
    std::cout << "The smallest number is: " << min_element(array, 5) << std::endl;
    return 0;
}