#include <iostream>

//function that given an array and its length, returns the following weighted average of the array,
//defined as the sum of each element multiplied by its frequency divided by the total number of elements

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    double occur = 0;
    double weightAvg = 0;
    for (int i = 0; i < n; i++) {
        occur = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                occur++;
            }
        }
        weightAvg = weightAvg + (array[i] * occur / n);
    }
    return weightAvg;
}