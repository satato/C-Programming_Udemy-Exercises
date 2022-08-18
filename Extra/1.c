//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
#include <string.h>

#define SIZE 20

int * initializeCountArr(int * arr, int * count_arr);
int maxElementInArray(int * arr, int arrSize);

//main method
int main(int argc, const char * argv[]) {
    
    int arr[SIZE] = {0,0,2,4,5,3,6,7,8,1,2,3,6,9,0,1,6,7,4,4};
    
    //digits in the sequence will only consist of values 0-9
    //so a 10 element array is ideal
    int countArray[10] = {0};
    int * countArrayPtr;
    countArrayPtr = countArray;
    
    int * arrPtr;
    arrPtr = arr;
    
    countArrayPtr = initializeCountArr(arr, countArrayPtr);
    
    int counterArrSize = sizeof(countArray) / sizeof(countArray[0]);
    printf("The number with the most appearances in the initialized array is %d\n",maxElementInArray(countArrayPtr,counterArrSize));
    
}

int * initializeCountArr(int arr[SIZE], int * count_arr) {
    
    for (int i = 0; i < SIZE; i++) {
        count_arr[arr[i]] += 1;
    }
    
    return count_arr;
}

int maxElementInArray(int * arr, int arrSize) {
    
    int max = 0;
    int maxAppearances = arr[0];
    
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > maxAppearances) {
            maxAppearances = arr[i];
            max = i;
        }
    }
    
    return max;
}
