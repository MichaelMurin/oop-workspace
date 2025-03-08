#include <iostream>

//function that returns the sum of the elements in the even positions in an array

double sum_even(double array[], int n) {
    if (n < 1) {
        return 0;
    }
    double sum = 0;
    for (int i = 0; i < n; i +=2) {
        sum = sum + array[i];
    }
    return sum;
}