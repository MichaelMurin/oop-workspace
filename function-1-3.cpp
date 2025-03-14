#include <iostream>
using namespace std;
//function that when given a matrix of integers, count the number of times each number 0-9 appears

void count_digits(int array[4][4]) {
    int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            switch (array[i][j]) {
                case 0:
                    num0++;
                break;
                case 1:
                    num1++;
                break;
                case 2:
                    num2++;
                break;
                case 3:
                    num3++;
                break;
                case 4:
                    num4++;
                break;
                case 5:
                    num5++;
                break;
                case 6:
                    num6++;
                break;
                case 7:
                    num7++;
                break;
                case 8:
                    num8++;
                break;
                case 9:
                    num9++;
                break;
            }
        }
    }
    cout << "0:" << num0 << ";1:" << num1 << ";2:" << num2 << ";3:" << num3 << ";4:" << num4 << ";5:" << num5 << ";6:" << num6 << ";7:" << num7 << ";8:" << num8 << ";9:" << num9 << ";" << endl;
}