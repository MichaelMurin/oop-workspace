#include <iostream>
#include <cmath>

extern int median_array(int[], int);

int main() {
    int array[5] = {2,5,1,2,4};
    std::cout << "The median of the array is: " << median_array(array,5) << std::endl;
    return 0;
}