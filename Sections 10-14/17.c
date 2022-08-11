//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int x;
    int y;
    
    printf("Please enter an x and y value for your coordinate:\n");
    scanf("%d%d",&x,&y);
    
    if (x > 0 && y > 0) {
        printf("(%d,%d) is in the first quadrant\n",x,y);
    }
    else if (x > 0) {
        printf("(%d,%d) is in the fourth quadrant\n",x,y);
    }
    else if (y > 0) {
        printf("(%d,%d) is in the second quadrant\n",x,y);
    }
    else {
        printf("(%d,%d) is in the third quadrant\n",x,y);
    }
    
}
