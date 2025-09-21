/*
Question:
Write a C program to find the HCF (GCD) of two numbers.
HCF (Highest Common Factor) or GCD (Greatest Common Divisor) is the largest number that divides both numbers completely.
*/

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    
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

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
