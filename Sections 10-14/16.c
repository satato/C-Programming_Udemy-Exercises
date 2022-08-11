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
    
    printf("Enter a number:\n");
    scanf("%d",&input);
    
    if (input < 0) {
        input *= -1;
    }
    
    printf("%d\n",input);
    
}
