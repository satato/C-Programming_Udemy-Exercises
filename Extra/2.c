//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>
#include <string.h>

#define SIZE 20



//main method
int main(int argc, const char * argv[]) {
    
    //count characters in a file exercise
    FILE * file_pointer;
    file_pointer = fopen("/Users/ambermelton/Desktop/my_file.txt","r");
    
    if (file_pointer == NULL)
        printf("failure opening file\n");
    else {
        printf("success opening file 'my_file.txt'\n");
        //proceed with reading the file!
        char charHolder;
        int character_count = 0;
        
        charHolder = fgetc(file_pointer);
        //while we've yet to reach the end of the file
        while (!feof(file_pointer)) {
            character_count++;
            printf("current character: %c\n",charHolder);
            charHolder = fgetc(file_pointer);
        }
        fclose(file_pointer);
        
        printf("The file contains %d characters\n",character_count);
    }
}
