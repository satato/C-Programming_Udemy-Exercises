//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //3-digit sum exercise
    printf("\n---------------------\n3-digit sum exercise\n");
    
    int num;
    int temp_num;
    int sum;
    
    printf("Please enter a 3-digit number\n");
    scanf("%d",&num);
    
    temp_num = num;
    
    sum = temp_num % 10;
    temp_num = temp_num - sum;
    
    sum = sum + (temp_num % 100) / 10;
    temp_num = temp_num - sum;
    
    sum = sum + temp_num / 100;
    
    printf("The sum of the digits of %d is %d\n",num,sum);

}
