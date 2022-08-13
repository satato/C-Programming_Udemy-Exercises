//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
int sumOfDivisors(int num);
int isPerfect(int num);

int main(int argc, const char * argv[]) {
    
    int input = 0;
    int index = 0;
    int arr[5];
    
    //set values of array
    do {
        printf("Please enter a number to go in index %d of a 5 element array\n",index);
        scanf("%d",&input);
        arr[index] = input;
        index++;
    } while(index < 5);
    
    //find maximum value in array
    int maxVal = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    
    printf("The index of the largest value in the array is: %d\n",maxIndex);
    
    
}
