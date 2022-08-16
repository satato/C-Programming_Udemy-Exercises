//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
int stringLength(char str[]);
#define SIZE 50

int main(int argc, const char * argv[]) {
    
    char input[SIZE];
    
    printf("enter\n");
    gets(input);
    printf("The length of the string: '%s'\nis: %d\n",input,stringLength(input));
    
}

int stringLength(char str[]) {
    
    int length = 0;
    
    for (int i = 0; i < SIZE; i++) {
        if (str[i] == '\0')
            break;
        else
            length++;
    }
    
    return length;
}
