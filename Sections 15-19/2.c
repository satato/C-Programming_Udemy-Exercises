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
    int pow;
    int result;
    
    printf("Enter a number and then enter an exponent\n");
    scanf("%d%d",&num,&pow);
    
    int i = 1;
    result = num;
    while (i < pow) {
        result = result * num;
        i++;
    }
    
    if (pow == 0) {
        result = 1;
    }
    else if (pow < 0) {
        printf("This program is not equipped for negative exponents");
    }
    
    printf("%d^%d = %d\n",num,pow,result);
    
}
