//
//  main.c
//  Udemy C Course Follow Along Project
//
//  Created by Amber Melton - August, 2022
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int result = 1;
    int million = 1000000;
    
    for (int i = 0; i < 30; i++) {
        result = result * 2;
    }
    
    if (result < million)
        printf("The million is better!\n");
    else if (result > million)
        printf("Take the penny! It gives you %d\n",result);
    else
        printf("Same difference really\n");
    
}
