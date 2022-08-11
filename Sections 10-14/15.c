//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int input;
    
    printf("Please input a number:\n");
    scanf("%d",&input);
    
    if (input < 100 && input >= 10) {
        printf("double-digit\n");
    }
    else if (input >= 100 && input < 1000) {
        printf("triple-digit\n");
    }
    else {
        printf("neither double nor triple digit\n");
    }
}
