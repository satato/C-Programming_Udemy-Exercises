//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
#include <string.h>

#define SIZE 50

int numEvenInSeq(void);

int main(int argc, const char * argv[]) {
    
    printf("The total count of the even numbers in the given sequence is %d\n",numEvenInSeq());
}

int numEvenInSeq(void) {
    int input = -2;
    
    do {
        printf("Enter a nonnegative value (will stop at -1):\n");
        scanf("%d",&input);
    } while (input < -1);
    
    if (input == -1)
        return 0;
    else if (input % 2 == 0 && input != 0)
        return numEvenInSeq() + 1;
    else
        return numEvenInSeq();

}
