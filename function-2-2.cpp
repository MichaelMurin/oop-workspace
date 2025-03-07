#include <iostream>

//function that returns the maximum element in an integer array

int max_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}