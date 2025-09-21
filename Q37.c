/*
Question:
Write a C program to find the LCM of two numbers.
LCM (Least Common Multiple) is the smallest number that is a multiple of both numbers.
*/

#include <stdio.h>

int main() {
    int a, b, hcf, lcm;
    int tempA, tempB;

    
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    
    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    hcf = tempA;


    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}

