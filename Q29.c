/*
Question:
Write a C program to calculate the factorial of a number.
*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  // Use long long for large factorials

    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using for loop
        for(i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}
