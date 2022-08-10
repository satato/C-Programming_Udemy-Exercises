//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //grade average exercise
    int grade1;
    int grade2;
    int grade3;
    
    printf("First grade:\n");
    scanf("%d",&grade1);
    printf("Second grade:\n");
    scanf("%d",&grade2);
    printf("Third grade:\n");
    scanf("%d",&grade3);
    
    printf("Grade Average: %f\n",((grade1 + grade2 + grade3)/3.0));

}
