#include <iostream>

extern int max_element(int[], int);

int main() {
    int array[6] = {0, 6, 1, 3, 4, 9};
    std::cout << "The biggest number is: " << max_element(array, 6) << std::endl;
    return 0;
}