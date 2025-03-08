#include <iostream>

//function that given a character 'A','B','C','D' or 'E' representing a grade,
//uses a switch statement print out if this is a pass or fail

void print_pass_fail(char grade) {
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
         std::cout << "Pass" << std::endl;
         break;
        case 'D':
        case 'E':
         std::cout << "Fail" << std::endl;
         break;
        default:
         std::cout << "Nothing" << std::endl;
    }
}