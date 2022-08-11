//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int seconds;
    int minutes;
    int hours;
    
    printf("Enter seconds:\n");
    scanf("%d",&seconds);
    
    minutes = seconds / 60;
    seconds = seconds % 60;
    
    hours = minutes / 60;
    minutes = minutes % 60;
    
    if (hours < 10 && minutes < 10 && seconds < 10) {
        printf("0%d:0%d:0%d\n",hours,minutes,seconds);
    }
    else if (hours < 10 && minutes < 10) {
        printf("0%d:0%d:%d\n",hours,minutes,seconds);
    }
    else if (hours < 10) {
        printf("0%d:%d:%d\n",hours,minutes,seconds);
    }
    else if (minutes < 10 && seconds < 10) {
        printf("%d:0%d:0%d\n",hours,minutes,seconds);
    }
    else if (minutes < 10) {
        printf("%d:0%d:%d\n",hours,minutes,seconds);
    }
    else if (seconds < 10) {
        printf("%d:%d:0%d\n",hours,minutes,seconds);
    }
    else if (hours < 10 && seconds < 10) {
        printf("0%d:%d:0%d\n",hours,minutes,seconds);
    }
    else {
        printf("%d:%d:%d\n",hours,minutes,seconds);
    }
    
}
