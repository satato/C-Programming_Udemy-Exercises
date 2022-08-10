//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //driving time exercise
    printf("\n---------------------\ndriving time exercise\n");
    
    float dist;
    float mph;
    
    printf("Please enter the distance you are planning to travel:\n");
    scanf("%f",&dist);
    printf("Please enter the speed you will be traveling at:\n");
    scanf("%f",&mph);
    
    printf("It will take approximately %0.2f hours to reach your destination\n",(dist / mph));

}
