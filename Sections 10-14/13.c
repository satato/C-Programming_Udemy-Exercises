//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton on 8/9/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    //calculator w/switch statements exercise
    int a;
    int b;
    char operator;
    float result;
    
    printf("Please enter first number:\n");
    scanf("%d",&a);
    
    printf("Please enter an operator (+ - * / %%):\n");
    scanf(" %c",&operator);
    
    printf("Please enter second number:\n");
    scanf("%d",&b);
    
    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = (double)a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            result = 0.0;
            printf("invalid operator provided\n");
            break;
    }
    
    printf("%d %c %d = %f\n",a,operator,b,result);
    
}
