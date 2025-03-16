#include <iostream>
using namespace std;

int main() {
    double num = 12.7;
    char let = 'c';
    double *numPtr = &num;
    char *letPtr = &let;

    cout << num << endl;
    cout << let << endl;
    printf("%p\n",numPtr);
    printf("%p\n",letPtr);
}