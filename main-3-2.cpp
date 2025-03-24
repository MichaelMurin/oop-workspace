#include <iostream>

extern int *readNumbers();
extern bool equalsArray(int *,int *,int);
extern int *reverseArray(int *,int);

int main() {
    int *array = readNumbers();
    int *reverse = reverseArray(array, 10);
    std::cout << equalsArray(array, reverse, 10) << std::endl;
    delete[] array;
    delete[] reverse;
    return 0;
}