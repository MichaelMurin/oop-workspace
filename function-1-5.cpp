#include <iostream>
using namespace std;

//function that, given two two-dimensional arrays, adds them together and prints the result as in 1-4
void print_summed(int array1[3][3],int array2[3][3]) {
    int resultArray[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultArray[i][j] = array1[i][j] + array2[i][j];
            cout << resultArray[i][j] << " ";
        }
        cout << endl;
    }
}