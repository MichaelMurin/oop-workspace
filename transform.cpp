#include <iostream>
using namespace std;

int baseToBase(int number, int base) {
    int new_number, i = 0, array[100];
    new_number = number;
    while (number != 0) {
        array[i] = number % base;
        number /= base;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << array[j];
    }
    cout << "\n";
    return 0;
}

int main() {
    int number = 1, base = 2;
    baseToBase(number, base);
    return 0;
}