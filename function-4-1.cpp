#include <iostream>

//functions to read up to 10 numbers from input

int *readNumbers(){
    int *array;
    array = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
    }
    return array;
}

//finds the greatest sum of the sub-arrays

int secondSmallestSum(int *numbers,int length) {
    int sumLength = 0;
    for (int i = 0; i < length + 1; i++) {
        sumLength += i;
    }
    int *sum = new int[sumLength];
    int index = 0;
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            for (int k = i; k <= j; k++) {
                sum[index] += numbers[k];
            }
            index++;
        }
    }
    int smallest = sum[0];
    int smallestIndex = 0;
    int secondSmallest = sum[0];
    for (int i = 1; i < sumLength; i++) {
        if (sum[i] < smallest) {
            smallest = sum[i];
            smallestIndex = i;
        }
    }
    for (int i = 0; i < smallestIndex; i++) {
        if (sum[i] >= smallest && sum[i] < secondSmallest) {
            secondSmallest = sum[i];
        }
    }
    for (int i = smallestIndex + 1; i < sumLength; i++) {
        if (sum[i] >= smallest && sum[i] < secondSmallest) {
            secondSmallest = sum[i];
        }
    }
    delete[] sum;
    return secondSmallest;
}