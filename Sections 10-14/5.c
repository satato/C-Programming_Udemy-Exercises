//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //decimal separation exercise
    printf("\n---------------------\ndecimal separation exercise\n");
    
    float data;
    
    printf("Please enter some decimal to work with:\n");
    scanf("%f",&data);
    
    printf("Decimal portion of %f: %f\n",data,(data - (int)data));

}
