//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    char input;
    int result;
    
    printf("Please enter a character:\n");
    scanf("%c",&input);
    
    result = (int)(input);
    
    if (result <= 90 && result >= 65) {
        printf("%c is an uppercase letter (of the English alphabet)\n",input);
    }
    else if (result <= 122 && result >= 97) {
        printf("%c is a lowercase letter (of the English alphabet)\n",input);
    }
    else if (result <= 57 && result >= 48) {
        printf("%c is a digit\n",input);
    }
    else {
        printf("%c is neither a letter of the English alphabet, nor a digit\n",input);
    }
    
}
