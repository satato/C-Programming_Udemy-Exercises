//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int num;
    
    printf("Enter a number > 0:\n");
    scanf("%d",&num);
    
    for (int i = 1; i <= num; i++) {
        printf("%d ",i);
    }
    
    printf("\n");
    
    for (int i = num; i > 0; i--) {
        printf("%d ",i);
    }
    
    printf("\n");
    
}
