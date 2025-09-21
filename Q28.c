/*
Question:
Write a C program to print the product of even numbers from 1 to n.
*/

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long for large products

    // Input the value of n
    printf("Enter a positive number n: ");
    scanf("%d", &n);

    // Check if there are even numbers
    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        // Calculate product of even numbers
        for(i = 2; i <= n; i += 2) {
            product *= i;
        }

        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0;
}
