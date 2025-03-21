#include <iostream>
using namespace std;

extern void modifyArray(double*, int, double);

int main() {
    double array[6] = {3.2, 4.1, 2.0, 1.7, 6.3, 0.9};
    modifyArray(array,6,1.1);
    cout << "Product Array: ";
    for (int i = 0; i < 6; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}