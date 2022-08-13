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
    int sum = 0;
    
    printf("Enter a num > 1:\n");
    scanf("%d",&num);
    
    if (num <= 1)
        printf("Invalid input. Program ending...");
    else {
        for (int i = 1; i <= num; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                sum += i;
        }
    }
    
    printf("%d\n",sum);
}
