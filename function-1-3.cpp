#include <iostream>

//function that returns the number of elements in an array that are equal to a given parameter

int num_count(int array[], int n, int number) {
    if (n < 1) {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }
    return count;
}