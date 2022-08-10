//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //rectangle area calculator exercise
    printf("\n---------------------\nrectangle area calculator exercise\n");
    int width;
    int length;
    
    printf("What is your rectangle's length?\n");
    scanf("%d",&length);
    printf("What is your rectangle's width?\n");
    scanf("%d",&width);
    
    printf("The area of your rectangle is %d\n",(length * width));

}
