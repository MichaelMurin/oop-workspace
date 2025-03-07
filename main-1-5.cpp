#include <iostream>

extern int count_evens(int);

int main() {
    int number = 6;
    std::cout << "The number of evens between 1 and " << number << " (inclusive) is: " << count_evens(number) << std::endl;
    return 0;
}