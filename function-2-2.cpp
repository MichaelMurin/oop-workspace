#include <iostream>
#include <cmath>

//function that, given a binary number represented as an array,
//takes the array and its size as a parameter, and returns the integer value

int binary_to_int(int binary_digits[], int number_of_digits) {
    int sum = 0;
    for (int i = 0; i < number_of_digits; i++) {
        sum = sum + binary_digits[i] * pow(2,number_of_digits - 1 - i);
    }
    return sum;
}