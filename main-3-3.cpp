#include <iostream>

extern double weighted_average(int[], int);

int main() {
    int array[5] = {3,1,1,3,4};
    std::cout << "The weighted average of the array is: " << weighted_average(array,5) << std::endl;
    return 0;
}