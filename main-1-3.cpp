#include <iostream>

extern void count_digits(int[4][4]); //linking function to main

int main() {
    int array[4][4] = {2, 3, 1, 4, 1, 4, 0, 9, 3, 4, 2, 1, 9, 8, 7, 0};
    count_digits(array);
    return 0;
}