//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton on 8/9/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int a;
    int b;
    
    printf("Please input two integers:\n");
    scanf("%d%d",&a,&b);
    
    if (a == b) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    
}
