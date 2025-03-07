#include <iostream>

extern void two_five_nine(int[], int);

int main() {
    int array[6] = {2, 5, 2, 9, 0, 9};
    two_five_nine(array, 6);
    return 0;
}