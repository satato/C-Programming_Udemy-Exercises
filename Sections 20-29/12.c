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

//defines "Point" struct type
typedef struct {
    int x;
    int y;
} coord;

//function prototypes
void pointPrinter(coord p);
coord pointGetter(void);

//main method
int main(int argc, const char * argv[]) {
    
    pointPrinter(pointGetter());
    
}

//functions! that do stuff!
void pointPrinter(coord p) {
    printf("Point (x,y): (%d,%d)\n",p.x,p.y);
}

coord pointGetter(void) {
    coord p;
    
    printf("Enter the x value for your coordinate point:\n");
    scanf("%d",&p.x);
    printf("Enter the y value for your coordinate point:\n");
    scanf("%d",&p.y);
    
    return p;
}
