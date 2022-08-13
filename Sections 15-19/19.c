//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
int sumOfDivisors(int num);

int main(int argc, const char * argv[]) {
    
    int input;
    printf("Enter a number:\n");
    scanf("%d",&input);
    
    printf("The sum of %d's divisors is: %d\n",input,sumOfDivisors(input));
    
}

int sumOfDivisors(int num) {
    
    int sum = 0;
    
    for (int i = 0; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    
    return sum;
}
