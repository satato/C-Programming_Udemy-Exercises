//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton on 8/9/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    //even or odd exercise
    int num;
    
    printf("Input a number please:\n");
    scanf("%d",&num);
    
    if (num % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    
}
