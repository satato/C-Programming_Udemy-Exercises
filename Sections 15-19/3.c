//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    float sum = 0;
    float input;
    float result;
    
    int grades_count = 0;
    
    do {
        printf("Enter a grade:\n");
        scanf("%f",&input);
        sum += input;
        grades_count += 1;
    } while (grades_count < 4);
    
    result = sum / 4.0;
    
    printf("The average of the grades provided is: ~%0.2f\n",result);
    
}
