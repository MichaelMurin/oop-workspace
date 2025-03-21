#include <iostream>
using namespace std;

extern double arrayMin(double*, int);

int main() {
    double array[5] = {4,2,3,1,9};
    cout << "The minimum value of the array is: " << arrayMin(array, 5) << endl;
    return 0;
}