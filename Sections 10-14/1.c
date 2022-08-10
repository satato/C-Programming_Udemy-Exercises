//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //arithmetic sequence exercise
    printf("\n---------------------\narithmetic sequence exercise\n");
    
    int a1;
    int d;
    int n;
    int a_n;
    
    printf("What is the initial value of your sequence?\n");
    scanf("%d",&a1);
    printf("What is the sequence's common difference?\n");
    scanf("%d",&d);
    printf("Alright - now which value of the sequence do we want find?\n");
    scanf("%d",&n);
    
    a_n = a1 + (n - 1) * d;
    
    printf("The nth value (%d) of your sequence is %d\n",n,a_n);
    
    int a_sum = (a1 + a_n) * (n / 2.00);
    
    printf("The approximate sum of your sequence up to the nth value (%d) is %d\n",n,a_sum);

}
