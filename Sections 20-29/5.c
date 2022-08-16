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

int main(int argc, const char * argv[]) {
    
    int input;
    
    printf("Enter n:\n");
    scanf("%d",&input);
    
    printf("The sum of digits in %d is %d\n",input,sumOfDigits(input));
    
}

int sumOfDigits(int num) {
    
    if (num < 0)
        return -1;
    
    if (num < 10)
        return num;
    else
        return sumOfDigits(num / 10) + num % 10;
    
}

