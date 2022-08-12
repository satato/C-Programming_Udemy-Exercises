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
    
    printf("Enter a number and a power\n");
    scanf("%d%d",&num,&pow);
    
    result = num;
    for (int i = 1; i < pow; i++) {
        result = result * num;
    }
    
    if (pow == 0)
        result = 1;
    else if (pow < 0)
        printf("This program is ill equipped to handle negative exponents\n");
    
    printf("%d^%d = %d\n",num,pow,result);
    
}
