//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton on 8/9/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int input;
    int x_2;
    int x_4;
    int x_6;
    int x_8;
    
    printf("Please give me a number to calculate with:\n");
    scanf("%d\n",&input);
    
    x_2 = input * input;
    x_4 = x_2 * x_2;
    x_6 = x_2 * x_4;
    x_8 = x_4 * x_4;
    
    printf("x^2: %d\nx^4: %d\nx^6: %d\nx^8: %d\n",x_2,x_4,x_6,x_8);
    
}
