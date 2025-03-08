#include <iostream>

extern double sum_even(double[], int);

int main() {
    double array[5] = {1,3,3,2,1};
    std::cout << "The sum of the even positions in the array is: " << sum_even(array,5) << std::endl;
    return 0;
}