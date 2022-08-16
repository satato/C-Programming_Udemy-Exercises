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

int numbersSmaller(int num);

int main(int argc, const char * argv[]) {
    
    int input;
    
    printf("Enter n:\n");
    scanf("%d",&input);
    
    printf("The total count of numbers less than %d is %d\n",input,numbersSmaller(input));
}

int numbersSmaller(int num) {
    int count = 0;
    int n;
    
    printf("Please enter the next number in the sequence (will stop when receive -1)\n");
    scanf("%d",&n);
    
    if (n == -1)
        return count;
    else if (n < num)
        return numbersSmaller(num) + 1;
    else
        return numbersSmaller(num);

}
