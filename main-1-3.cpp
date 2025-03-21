#include <iostream>
using namespace std;

extern double* duplicateArray(double*, int);

int main() {
    double array[4] = {1, 5, 2, 3};
    double* ptr = duplicateArray(array, 4);
    cout << "Duplicate Array: ";
    for (int i = 0; i < 4; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    delete[] ptr;
}