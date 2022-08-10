//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //takes celsius, returns fahrenheit
    double deg_C;
    double deg_F;
    
    printf("Enter degrees Celsius:\n");
    scanf("%lf",&deg_C);
    
    deg_F = deg_C * 1.8 + 32;
    
    printf("Degrees Celsius: %0.2lf\nDegrees Fahrenheit:%0.2lf\n",deg_C,deg_F);
    
    //takes fahrenheit, returns celsius
    printf("Enter degrees Fahrenheit:\n");
    scanf("%lf",&deg_F);
    
    deg_C = (deg_F - 32) / 1.8;
    
    printf("Degrees Fahrenheit:%0.2lf\nDegrees Celsius: %0.2lf\n",deg_F,deg_C);

}
