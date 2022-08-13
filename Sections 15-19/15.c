//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    float h;
    float w;
    float rectArea(float height,float width);
    
    printf("Enter a height and a width:\n");
    scanf("%f%f",&h,&w);
    
    printf("The area of a rectangle with...\nheight: %0.2f\nwidth: %0.2f\nis: %0.2f\n",h,w,rectArea(h, w));
    
}

float rectArea(float height,float width) {
    return height * width;
}
