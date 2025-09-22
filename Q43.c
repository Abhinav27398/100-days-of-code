/*
Question:
Write a C program to check if a number is a Strong Number.
A Strong Number is a number whose sum of the factorials of its digits is equal to the number itself.
Example: 145 = 1! + 4! + 5! = 145
*/

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    original = num;

    // Calculate sum of factorials of digits
    while (num != 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    // Check Strong Number condition
    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is not a Strong Number.\n", original);
    }

    return 0;
}
