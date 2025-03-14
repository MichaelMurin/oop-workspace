#include <iostream>
using namespace std;

//function that, given a matrix, prints out the scaled version of the matrix,
//where you multiply every element in the matrix by the same numeric value.

void print_scaled(int array[3][3],int scale) {
    int resultArray[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultArray[i][j] = array[i][j] * scale;
            cout << resultArray[i][j] << " ";
        }
        cout << endl;
    }
}