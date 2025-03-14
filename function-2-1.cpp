#include <iostream>

//function that given a positive integer decimal number (i.e. base-10) transforms it into binary (base-2) and prints out the result
void print_binary_str(std::string decimal_numbers) {
    int number = stoi(decimal_numbers);
    std::string binary;
    while (number != 0) {    
        if (number % 2 == 0) {
            binary = "0" + binary;
        } else {
            binary = "1" + binary;
        }
        number /= 2;
    }
    std::cout << binary << std::endl;
}