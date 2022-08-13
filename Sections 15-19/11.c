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
    int multiplier;
    
    printf("Enter a number > 0:\n");
    scanf("%d",&num);
    printf("Enter a number > 0:\n");
    scanf("%d",&multiplier);
    
    for (int i = 1; i <= multiplier; i++) {
        printf("%d * %d = %d\n",num,i,(num * i));
    }
    
}
