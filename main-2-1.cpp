#include <iostream>

extern void print_binary_str(std::string);

int main() {
    std::string number = "2579";
    print_binary_str(number);
    return 0;
}