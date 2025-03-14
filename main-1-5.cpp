#include <iostream>

extern void print_summed(int[3][3],int[3][3]);

int main() {
    int array1[3][3] = {{1, 0 , 2},{4, 1, 0},{0, 3, 0}};
    int array2[3][3] = {{2, 1, 0},{0, 4, 5},{6, 3, 9}};
    print_summed(array1,array2);
    return 0;
}