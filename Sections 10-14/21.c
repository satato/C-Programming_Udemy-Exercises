//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int year;
    int leapYear = 0;
    
    printf("Enter year:\n");
    scanf("%d",&year);
    
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0)
            leapYear = 1;
    }
    
    if (leapYear == 1)
        printf("%d is a leap year!\n",year);
    else
        printf("%d is not a leap year.\n",year);
    
}
