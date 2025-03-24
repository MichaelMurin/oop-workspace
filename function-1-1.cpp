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

void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++) {
        cout << i << " " << numbers[i] << endl;
    }
}