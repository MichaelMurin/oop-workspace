#include <iostream>

extern void print_scaled(int[3][3],int); //external function calling

int main() {
    int array[3][3] = {{2, 2, 4},{1, 0, 3},{4, 1, 0}};
    int scale = 4;
    print_scaled(array,scale);
    return 0;
}