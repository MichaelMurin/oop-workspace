#include <iostream>
using namespace std;

//Part 2: function that changes a number to 42 by dereferencing it via its pointer
void changeValue(double* ptr) {
    *ptr = 42;
}

//Part 3: function that prints an array by its address
void printArray(double* arrayPtr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << arrayPtr[i] << endl;
    }
}

//Part 4: function that accepts a pointer to a double array and its size and prints its maximum value
double arrayMax(double* arrayPtr, int size) {
    double max = arrayPtr[0];
    for (int i = 1; i < size; i++) {
        if (arrayPtr[i] > max) {
            max = arrayPtr[i];
        }
    }
    return max;
}

//Part 5: function that accepts an integer as an argument, dynamically allocates a double array of that size,
//initialises the array with values and returns the pointer to the array.
double* dynamicArray(int N, double M) {
    double *array;
    array = new double(N);
    for (int i = 0; i < N; i++) {
        array[i] = M;
    }
    return array;
}