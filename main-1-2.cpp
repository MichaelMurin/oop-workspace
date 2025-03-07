#include <iostream>
//calling external function
extern double array_mean(int[], int);
//main function that tests getting mean from array
int main() {
    int array[5] = {4, 2, 1, 6, 7};
    std::cout << "The mean of the array is: " << array_mean(array, 5) << std::endl;
    return 0;
}