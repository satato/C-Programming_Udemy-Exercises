//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton on 8/9/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    //min or max additional exercise
    float num_a;
    float num_b;
    float num_c;
    
    float min;
    float max;
    
    printf("Enter 3 different numbers");
    scanf("%f%f%f",&num_a,&num_b,&num_c);
    
    min = num_a;
    max = num_a;
    
    if (num_b < min) {
        min = num_b;
    }
    if (num_c < min) {
        min = num_c;
    }
    
    if (num_b > max) {
        max = num_b;
    }
    if (num_c > max) {
        max = num_c;
    }
    
    printf("min: %f\nmax: %f\n",min,max);
    
}
