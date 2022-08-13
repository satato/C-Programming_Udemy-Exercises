//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    float lessDigAvg(void);
    lessDigAvg();
}

float lessDigAvg(void) {
    int num;
    int digit = -1;
    float sum = 0;
    int count = 0;
    
    do {
        printf("Enter a number:\n");
        scanf("%d",&num);
    } while(num < 0);
    
    do {
        printf("Enter a digit:\n");
        scanf("%d",&digit);
    } while(digit > 9 || digit < 0);
    
    int num_working = num;
    
    while (num_working > 10) {
        if (num_working % 10 < digit) {
            count++;
            sum += num_working % 10;
        }
        num_working = num_working / 10;
    }

    if (num_working < digit) {
        count++;
        sum += num_working;
    }
    
    float average = sum / count;
    if (count == 0)
        average = 0;
    
    printf("The number of digits in %d that are less than %d are: %d\n",num,digit,count);
    printf("The average of the %d digits in %d less than %d is: %0.2f\n",count,num,digit,average);
    
    return average;
}


