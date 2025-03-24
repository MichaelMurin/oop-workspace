#include <iostream>
//external function calling
extern int *readNumbers();
extern void printNumbers(int *,int);
//getting the sum of elements in the diagonal of an array and printing a message
int main() {
    int *array = readNumbers();
    printNumbers(array, 10);
    return 0;
}