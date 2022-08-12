//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int n = -1;
    
    //take valid input
    do {
        printf("Please enter a number > 0:\n");
        scanf("%d",&n);
    } while (n <= 0);
    
    //print the triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    
}
