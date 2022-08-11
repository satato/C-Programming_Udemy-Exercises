//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int a;
    int b;
    int c;
    int divisible = 0;
    
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a > b) {
        if (a % b == 0)
            divisible = 1;
    }
    else if (b % a == 0) {
        divisible = 1;
    }
    
    if (a > c) {
        if (a % c == 0)
            divisible = 1;
    }
    else if (c % a == 0) {
        divisible = 1;
    }
    
    if (b > c) {
        if (b % c == 0)
            divisible = 1;
    }
    else if (c % b == 0) {
        divisible = 1;
    }
    
    if (divisible == 1)
        printf("Divisible\n");
    
}
