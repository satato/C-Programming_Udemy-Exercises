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

int numCharInSeq(char c);

int main(int argc, const char * argv[]) {
    
    char input;
    
    printf("Enter n:\n");
    scanf("\n%c",&input);
    
    printf("The total count of the character %c in the given sequence of characters is %d\n",input,numCharInSeq(input));
}

int numCharInSeq(char c) {
    char input;
    printf("Enter a character (will stop when receive '$' character)\n");
    scanf("\n%c",&input);
    
    if (input == '$')
        return 0;
    else if (input == c)
        return numCharInSeq(c) + 1;
    else
        return numCharInSeq(c);

}
