//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
int sumOfDivisors(int num);
int isPerfect(int num);

int main(int argc, const char * argv[]) {
    
    int input;
    printf("Enter a number:\n");
    scanf("%d",&input);
    
    printf("The sum of %d's divisors is: %d\n",input,sumOfDivisors(input));
    
    /*printf("Is %d a perfect number? 0 = no. 1 = yes...\n%d\n",input,isPerfect(input,sumOfDivisors(input)));*/
    printf("Is %d a perfect number? 0 = no. 1 = yes...\n%d\n",input,isPerfect(input));
}

int isPerfect(int num) {
    
    int sum = sumOfDivisors(num);
    
    if (sum == num)
        return 1;
    else
        return 0;
}

int sumOfDivisors(int num) {
    
    int sum = 0;
    
    for (int i = 0; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    
    return sum;
}
