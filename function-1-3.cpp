#include <iostream>

double* duplicateArray(double* array, int size) {
    double* duplicate = new double[size];
    for (int i = 0; i < size; i++) {
        duplicate[i] = array[i];
    }
    return duplicate;
}