#include <iostream>
#include <cmath>

extern int binary_to_int(int[], int);

int main() {
    int binary[6] = {1, 1, 0, 0, 1, 0};
    std::cout << "The integer value of the binary array is " << binary_to_int(binary, 6) << std::endl;
    return 0;
}