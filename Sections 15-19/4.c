//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int grade;
    
    do {
        printf("Please enter a (valid 0-100) grade:\n");
        scanf("%d",&grade);
    } while (grade > 100 || grade < 0);
    
    printf("Thanks! You've inputted %d which is a valid grade!\n",grade);
    
}
