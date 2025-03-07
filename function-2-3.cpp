#include <iostream>

//function that given an array of integers and the length of the array,
//will count the amount of times the numbers 2, 5 and 9 appear using a switch statement.

void two_five_nine(int array[], int n) {
    int num_twos = 0;
    int num_fives = 0;
    int num_nines = 0;
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
             num_twos++;
             break;
            case 5:
             num_fives++;
             break;
            case 9:
             num_nines++;
             break;
        }
    }
    std::cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";" << std::endl;
}