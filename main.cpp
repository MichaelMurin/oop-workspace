#include <iostream>
#include "workshop.h"

using namespace std;

int main() {
    //Part 2
    double number = 2.0;
    double *ptr = &number;
    changeValue(ptr);
    cout << "New number: " << number << endl;
    //Part 3
    double array3[5] = {3,0,4,1,2};
    printArray(array3, 5);
    //Part 4
    cout << "The maximum value of the array is: " << arrayMax(array3, 5) << endl;
    //Part 5, 6, 7, 8
    double *array5 = dynamicArray(7, 12.7);
    printArray(array5, 7);
    cout << "The maximum value of array5 is: " << arrayMax(array5, 7) << endl;
    delete[] array5;
}