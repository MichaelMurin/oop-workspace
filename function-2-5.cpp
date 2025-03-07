#include <iostream>

//function that given an array of integers and its length, will determine if the elements are in descending order or not

bool is_descending(int array[], int n) {
    if (n < 1) {
        return false;
    }
    int previous = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > previous) {
            return false;
        }
        previous = array[i];
    }
    return true;
}