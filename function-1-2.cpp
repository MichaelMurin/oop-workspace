#include <iostream>

//function that, given a matrix of integers with 10 rows and 10 columns, see if array is an identity array

int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        if (array[i][i] != 1) {
            return 0;
        }
        for (int j = i + 1; j < 10; j++) {
            if (array[i][j] != 0) {
                return 0;
            }
        }
        if (i > 0) {
            for (int j = i - 1; j >= 0; j--) {
                if (array[i][j] != 0) {
                return 0;
                }
            }
        }
    }
    return 1;
}