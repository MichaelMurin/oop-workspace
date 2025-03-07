#include <iostream>

//function that given an array of integers and its length, will find the minimum (smallest) number and return it

int min_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    int min = array[0];
    for (int i = 1; i < n; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}