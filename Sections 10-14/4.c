//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //time conversion exercise
    printf("\n---------------------\ntime conversion exercise\n");
    
    int seconds;
    int minutes;
    int hours;
    
    printf("Please enter the seconds:\n");
    scanf("%d",&seconds);
    
    minutes = seconds / 60;
    seconds = seconds % 60;
    
    hours = minutes / 60;
    minutes = minutes % 60;
    
    printf("%d:%d:%d\n",hours,minutes,seconds);

}
