#include <iostream>

//function that given an array of integers and its length, will determine if the elements are in ascending order or not

bool is_ascending(int array[], int n) {
    if (n < 1) {
        return false;
    }
    int current = 0;
    int previous = array[0];
    for (int i = 1; i < n; i++) {
        current = array[i];
        if (current < previous) {
            return false;
        }
    }
    return true;
}