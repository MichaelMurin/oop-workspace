#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *,int *,int);

int main() {
    int *array1 = readNumbers();
    int *array2 = readNumbers();
    std::cout << equalsArray(array1, array2, 10) << std::endl;
    delete[] array1;
    delete[] array2;
}