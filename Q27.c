/*
Question:
Write a C program to print the sum of the first n odd numbers.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input the value of n
    printf("Enter a positive number n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for(i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
