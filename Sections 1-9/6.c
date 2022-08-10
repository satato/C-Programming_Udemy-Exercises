//
//  main.c
//  Udemy C Course Follow Along Project
//  author: Amber Melton
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //basic birth year calculator exercise
    printf("\n---------------------\nbirth year calculator exercise\n");
    int current_year;
    int user_age;
    int year_born;
    
    printf("Please type the current year...");
    scanf("%d",&current_year);
    printf("Please type your current age...");
    scanf("%d",&user_age);
    printf("year: %d\nage: %d\n",current_year,user_age);
    
    year_born = current_year - user_age;
    printf("You were born in the year %d or the year %d\n",year_born,(year_born - 1));

}
