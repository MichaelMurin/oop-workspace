#include <iostream>
using namespace std;

//functions to read up to 10 numbers from input and then print them

int *readNumbers(){
    int *array;
    array = new int[10];
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }
    return array;
}

//function that given two arrays of the same length that is greater than 0 with all elements equivalent will be true

bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 1) {
        return false;
    }
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
}