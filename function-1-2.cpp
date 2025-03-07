#include <iostream>

//function that returns the average of all elements in an integer array

double array_mean(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }
    int sum = 0;
    int mean = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + array[i];
    }
    mean = sum / n;
    return mean;
}