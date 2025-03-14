#include <iostream>
#include <cmath>
using namespace std;

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int array[6] = {2, 5, 2, 2, 5, 2};
    cout << sum_if_palindrome(array, 6) << endl;
    return 0;
}