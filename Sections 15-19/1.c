//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int count;
    printf("How many asterisks should I print?\n");
    scanf("%d",&count);
    
    for (int i = 0; i < count; i++) {
        printf("*");
    }
    
    printf("\n");
    
}
