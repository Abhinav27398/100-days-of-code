/*
Question:
Write a C program to check if a number is a Perfect Number.
A Perfect Number is a number that is equal to the sum of its proper divisors (excluding itself).
Example: 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14
*/

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    // Find sum of divisors (excluding the number itself)
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check perfect number condition
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}
