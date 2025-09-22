 /*
Question:
Write a C program to find the sum of the series:
1 + 3/4 + 5/6 + 7/8 + … up to n terms.
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
        int numerator = 2 * i - 1;    // odd numbers: 1, 3, 5, ...
        int denominator = 2 * i;      // even numbers: 2, 4, 6, ...
        sum += (double)numerator / denominator;
    }

    // Display result
    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
