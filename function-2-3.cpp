#include <iostream>
#include <cmath>

//a number of functions that calculate the sum of the
//elements in the case of it being a palindrome array


bool is_palindrome(int integers[], int length) { //function to check whether the array is a palindrome
    if (length < 1) {
        return false;
    }
    if (length % 2 != 0) {
        for (int i = 0; i < ceil(length/2); i++) {
            if (integers[i] != integers[length - 1 - i]) {
                return false;
            }
        }
        return true;
    } else {
        for (int i = 0; i < length/2; i++) {
            if (integers[i] != integers[length - 1 - i]) {
                return false;
            }
        }
        return true;
    }
}
int sum_array_elements(int integers[], int length) { //function to sum elements of the array
    if (length < 1) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + integers[i];
    }
    return sum;
}
int sum_if_palindrome(int integers[], int length) {
    if (length < 1) {
        return -1;
    }
    if (is_palindrome(integers, length) == false) {
        return -2;
    } else {
        return sum_array_elements(integers, length);
    }
}