//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //3-digit reversal exercise
    printf("\n---------------------\n3-digit reversal exercise\n");
    
    int num;
    int temp_num;
    int reversal;
    
    printf("Please enter a 3-digit number\n");
    scanf("%d",&num);
    
    temp_num = num;
    
    reversal = (temp_num % 10) * 100;
    temp_num = temp_num - (temp_num % 10);
    
    reversal = reversal + (temp_num % 100);
    temp_num = temp_num - (temp_num % 100);
    
    reversal = reversal + (temp_num / 100);
    
    printf("%d reversed is %d\n",num,reversal);

}
