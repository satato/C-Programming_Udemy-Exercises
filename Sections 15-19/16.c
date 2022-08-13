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
    int maxDigit(int num);
    
    printf("Enter a 2-digit number:\n");
    scanf("%d",&num);
    
    printf("The max of the two digits that make up %d is %d\n",num,maxDigit(num));
    
}

int maxDigit(int num) {
    int ones = num % 10;
    int tens = num / 10;
    
    if (ones > tens)
        return ones;
    else
        return tens;
}
