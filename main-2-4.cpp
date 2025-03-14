#include <iostream>

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int array[5] = {4,-2,5,1,10};
    std::cout << sum_min_max(array, 5) << std::endl;
}