#include <iostream>

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main() {
    int *array = readNumbers();
    std::cout << "The second smallest sum is: " << secondSmallestSum(array,10) << std::endl;
    delete[] array;
    return 0;
}