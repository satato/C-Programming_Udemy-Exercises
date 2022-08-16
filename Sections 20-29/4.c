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

int fibonacci(int n);

int main(int argc, const char * argv[]) {
    
    int input;
    
    printf("Enter n:\n");
    scanf("%d",&input);
    
    printf("Value at n = %d: %d\n",input,fibonacci(input));
    
}

int fibonacci(int n) {
    
    if (n == 0 || n == 1)
        return n;
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

