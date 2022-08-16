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

int main(int argc, const char * argv[]) {
    
    char input[SIZE];
    
    printf("enter\n");
    gets(input);
    
    int wordCount = 1;
    
    if (strlen(input) == 0)
        wordCount = 0;
    
    for (int i = 0; i < SIZE; i++) {
        if (input[i] == '\0')
            break;
        else {
            if (input[i] == ' ')
                wordCount++;
        }
    }
    
    printf("words: %d\n",wordCount);
    
}


