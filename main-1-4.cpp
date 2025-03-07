#include <iostream>

extern int sum_two_arrays(int[], int[], int); //external function calling

int main() {
    int array1[5] = {2, 2, 4, 1, 0};
    int array2[5] = {3, 1, 5, 7, 1};
    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array1, array2, 5) << std::endl;
    return 0;
}