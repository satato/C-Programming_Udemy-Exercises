//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
int sumOfDivisors(int num);
int isPerfect(int num);

int main(int argc, const char * argv[]) {
    
    //array copy exercise
    int date_arr[3]; //stores values of {day,month,year}
    
    printf("Enter (integer) value for the day\n");
    scanf("%d",&date_arr[0]);
    
    printf("Enter (integer) value for the month\n");
    scanf("%d",&date_arr[1]);
    
    printf("Enter (integer) value for the year\n");
    scanf("%d",&date_arr[2]);
    
    int date_arr_2[3];
    for (int i = 0; i < 3; i++)
        date_arr_2[i] = date_arr[i];
    
}
