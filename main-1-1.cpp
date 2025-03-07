#include <iostream>
//external function calling
extern int array_sum(int[], int);
//getting the sum of elements from an array and printing a message
int main() {
    int array[5] = {4, 2, 1, 6, 7};
    std::cout << "The sum of elements is: " << array_sum(array, 5) << std::endl;
    return 0;
}