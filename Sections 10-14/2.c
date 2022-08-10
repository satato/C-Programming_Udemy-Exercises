//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //monthly salary calculator
    printf("\n---------------------\nmonthly salary calculator exercise\n");
    
    float hourly_rate;
    float monthly_hours;
    
    printf("Please input your hourly rate:\n");
    scanf("%f",&hourly_rate);
    printf("Please input your total hours worked per month:\n");
    scanf("%f",&monthly_hours);
    
    printf("Your monthly salary based on\nrate: %0.2f\nhours worked:%0.2f\nis: %0.2f\n",hourly_rate,monthly_hours,(hourly_rate * monthly_hours));

}
