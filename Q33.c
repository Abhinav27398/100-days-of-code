/*
Question:
Write a C program to check if a number is an Armstrong number.
An Armstrong number is a number that is equal to the sum of the cubes of its digits.
For example, 153 is an Armstrong number: 1^3 + 5^3 + 3^3 = 153
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0;
    int digits = 0;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    original = num;

    
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }


    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
