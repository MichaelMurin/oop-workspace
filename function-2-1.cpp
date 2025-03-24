#include <iostream>
using namespace std;

//function that given an array with integers between 0-15, prints their hexadecimal digit
void hexDigits(int *numbers,int length) {
    char hex;
    for (int i = 0; i < length; i++) {
        cout << i << " " << numbers[i] << " ";
        switch (numbers[i]) {
            case 10:
                hex = 'A';
                break;
            case 11:
                hex = 'B';
                break;
            case 12:
                hex = 'C';
                break;
            case 13:
                hex = 'D';
                break;
            case 14:
                hex = 'E';
                break;
            case 15:
                hex = 'F';
                break;
            default:
                char value[1 + sizeof(char)];
                sprintf(value,"%d",numbers[i]);
                hex = value[0];
        }
        cout << hex << endl;
    }
}