#include <iostream>
#include <cmath>

//function that given an array of integers, and its length, determine if the array is a 'fan' array

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }
    double length = n;
    int mid = ceil(length/2);
    for (int i = 1; i < mid; i++) {
        if (array[i] <= array[i-1]) {
            return false;
        }
    }
    for (int i = mid; i < n; i++) {
        if (array[i] != array[n-1-i]) {
            return false;
        }
    }
    return true;
}