//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int num;
    long factorial(int n);
    
    printf("Enter a number:\n");
    scanf("%d",&num);
    
    printf("%d! = %ld\n",num,factorial(num));
    
}

long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


