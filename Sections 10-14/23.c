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
    int month;
    int day;
    
    printf("Enter day, month, and year as three separate numbers:\n");
    scanf("%d%d%d",&day,&month,&year);
    
    printf("Day: 0x%X\nMonth: 0x%X\nYear: 0x%X\n",day,month,year);
    
}
