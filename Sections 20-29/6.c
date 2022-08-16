//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
#include <string.h>

#define SIZE 50

int sumOfDigits(int num);
int numOfDigits(int num);

int main(int argc, const char * argv[]) {
    
    int input;
    
    printf("Enter n:\n");
    scanf("%d",&input);
    
    printf("The number of digits in %d is %d\n",input,numOfDigits(input));
    
}

int sumOfDigits(int num) {
    
    if (num < 0)
        return -1;
    
    if (num < 10)
        return num;
    else
        return sumOfDigits(num / 10) + num % 10;
    
}

int numOfDigits(int num) {
    
    int count = 0;
    if (num < 10)
        count = 1;
    else
        count = numOfDigits(num / 10) + 1;
    
    return count;
}
