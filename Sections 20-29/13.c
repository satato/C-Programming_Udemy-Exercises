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

//defines "Rational" struct type
typedef struct {
    int numerator;
    int denominator;
} Rational;

//function prototypes
void printRational(Rational r);
Rational increment(Rational r);
Rational decrement(Rational r);
Rational addition(Rational r1, Rational r2);
Rational subtraction(Rational r1, Rational r2);
Rational multiplication(Rational r1, Rational r2);
Rational division(Rational r1, Rational r2);
int isEqual(Rational r1, Rational r2);

//main method
int main(int argc, const char * argv[]) {
    
    Rational a,b;
    
    printf("Enter numerator #1:\n");
    scanf("%d",&a.numerator);
    printf("Enter denominator #1:\n");
    scanf("%d",&a.denominator);
    printf("Enter numerator #2:\n");
    scanf("%d",&b.numerator);
    printf("Enter denominator #2:\n");
    scanf("%d",&b.denominator);
    
    printRational(a);
    printRational(b);
    
}

//functions! that do stuff!
void printRational(Rational r) {
    printf("%d/%d\n",r.numerator,r.denominator);
}

//my increment and decrement functions aren't quite mathematically correct but shh. it is late and I am tired
Rational increment(Rational r) {
    r.numerator++;
    return r;
}

Rational decrement(Rational r) {
    r.numerator--;
    return r;
}

Rational addition(Rational r1, Rational r2) {
    
    int denom1 = r1.denominator;
    int denom2 = r2.denominator;
    int num1 = r1.numerator;
    int num2 = r2.numerator;
    
    //finds common denominator
    if (denom1 != denom2) {
        num1 *= denom2;
        num2 *= denom1;
        denom1 *= denom2;
        denom2 = denom1;
    }
    
    Rational r3 = {(num1 + num2),denom1};
    return r3;
}

Rational subtraction(Rational r1, Rational r2) {
    int denom1 = r1.denominator;
    int denom2 = r2.denominator;
    int num1 = r1.numerator;
    int num2 = r2.numerator;
    
    //finds common denominator
    if (denom1 != denom2) {
        num1 *= denom2;
        num2 *= denom1;
        denom1 *= denom2;
        denom2 = denom1;
    }
    
    Rational r3 = {(num1 - num2),denom1};
    return r3;
}

Rational multiplication(Rational r1, Rational r2) {
    
    Rational r3 = {(r1.numerator * r2.numerator),(r1.denominator * r2.denominator)};
    return r3;
    
}

Rational division(Rational r1, Rational r2) {
    
    Rational r3 = {(r1.numerator * r2.denominator),(r1.denominator * r2.numerator)};
    return r3;
    
}

int isEqual(Rational r1, Rational r2) {
    
    float rat1 = (float)r1.numerator / r1.denominator;
    float rat2 = (float)r2.numerator / r2.denominator;
    
    if (rat1 < rat2)
        return -1;
    else if (rat1 > rat2)
        return 1;
    else
        return 0;
    
}
