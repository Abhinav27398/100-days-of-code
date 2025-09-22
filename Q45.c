/*
Question:
Write a C program to find the sum of the series:
2/3 + 4/7 + 6/11 + 8/15 + … up to n terms.
*/

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Calculate the series sum
    for (i = 1; i <= n; i++) {
        int numerator = 2 * i;            // 2, 4, 6, 8, ...
        int denominator = 4 * i - 1;      // 3, 7, 11, 15, ...
        sum += (double)numerator / denominator;
    }

    // Display result
    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
