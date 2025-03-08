#include <iostream>
#include <cmath>

//Function that, given an array of integers and its length, returns the median of the array

int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {
        return 0;
    }
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    int median = std::ceil(n/2);
    return array[median];
}