/*
Question:
Write a C program to print all prime numbers from 1 to n.
A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
*/

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input upper limit
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers up to %d.\n", n);
        return 0;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    // Check each number from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume number is prime
        for (j = 2; j*j <= i; j++) { // Check divisibility up to √i
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
