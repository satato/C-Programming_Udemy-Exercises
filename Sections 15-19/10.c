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
    int sum = 0;
    
    printf("Enter a number > 0:\n");
    scanf("%d",&num);
    
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    
    printf("Sum of all numbers between 1 to %d is %d\n",num,sum);
    
}
