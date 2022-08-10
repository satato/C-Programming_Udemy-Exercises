//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton on 8/9/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    float x1;
    float x2;
    float y1;
    float y2;
    
    float dist;
    
    printf("Please enter x1:\n");
    scanf("%f",&x1);
    printf("Please enter x2:\n");
    scanf("%f",&x2);
    printf("Please enter y1:\n");
    scanf("%f",&y1);
    printf("Please enter y2:\n");
    scanf("%f",&y2);
    
    //exponent operator doesn't exist, so squaring is binomial multiplication instead
    dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    
    printf("The distance between (%0.2f,%0.2f) and (%0.2f,%0.2f) is approximately %0.2f\n",x1,y1,x2,y2,dist);
    
}
