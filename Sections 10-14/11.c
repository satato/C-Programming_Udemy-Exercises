//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton on 8/9/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    //min or max exercise
    float num_a;
    float num_b;
    
    printf("Enter first number:\n");
    scanf("%f%f",&num_a,&num_b);
    
    if (num_a > num_b)
        printf("max: %f\n",num_a);
    else
        printf("max: %f\n",num_b);
    
}
