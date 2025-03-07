#include <iostream>

//function to count number of evens
int count_evens(int number) {
    int total = 0;
    if (number < 1) {
        return 0;
    }
    for (int i = 1; i < number+1; i++) {
        if (i % 2 == 0) {
            total++;
        }
    }
    return total;
}