#include <iostream>
//external function calling
extern int sum_diagonal(int[4][4]);
//getting the sum of elements in the diagonal of an array and printing a message
int main() {
    int array[4][4] = {4, 2, 1, 6, 9, 1, 3, 5, 4, 2, 8, 9, 10, 3, 2, 1};
    std::cout << "The sum of diagonal elements is: " << sum_diagonal(array) << std::endl;
    return 0;
}