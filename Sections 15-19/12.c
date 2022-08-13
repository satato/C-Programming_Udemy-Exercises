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
    
    printf("Enter a num > 2:\n");
    scanf("%d",&num);
    
    if (num <= 2)
        printf("Invalid input. Program ending...");
    else {
        for (int i = 2; i <= num; i++) {
            if (i % 2 == 0)
                printf("%d ",i);
        }
    }
    
    printf("\n");
}
