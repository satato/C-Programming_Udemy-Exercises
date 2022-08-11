//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int day;
    int month;
    int year;
    
    int monthEnd = 0;
    
    printf("Enter a day, month, and year, as integers:\n");
    scanf("%d%d%d",&day,&month,&year);
    
    switch (month) {
        case 1:
            if (day == 31)
                monthEnd = 1;
            break;
        case 2:
            if (day == 28)
                monthEnd = 1;
            break;
        case 3:
            if (day == 31)
                monthEnd = 1;
            break;
        case 4:
            if (day == 30)
                monthEnd = 1;
            break;
        case 5:
            if (day == 31)
                monthEnd = 1;
            break;
        case 6:
            if (day == 30)
                monthEnd = 1;
            break;
        case 7:
            if (day == 31)
                monthEnd = 1;
            break;
        case 8:
            if (day == 31)
                monthEnd = 1;
            break;
        case 9:
            if (day == 30)
                monthEnd = 1;
            break;
        case 10:
            if (day == 31)
                monthEnd = 1;
            break;
        case 11:
            if (day == 30)
                monthEnd = 1;
            break;
        case 12:
            if (day == 31)
                monthEnd = 1;
            break;
    }
    
    if (monthEnd == 1 && month == 12) {
        year += 1;
        month = 0;
    }
    
    if (monthEnd == 1) {
        month += 1;
        day = 0;
    }
    
    day += 1;
    
    printf("Next day: %d %d %d\n",day,month,year);
    
}
