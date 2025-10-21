/*
Question:
Write a C program to take a positive integer n as input, and find the pivot integer x such that:
sum(1 to x) = sum(x to n)
If no such integer exists, print -1.
Assume there will be at most one pivot integer for the given input.
*/

#include <stdio.h>

int main() {
    int n, x;
    int totalSum = 0, leftSum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    totalSum = n * (n + 1) / 2;

    // Check for pivot
    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;              // sum from 1 to x
        int rightSum = totalSum - leftSum + x;  // sum from x to n

        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    // If no pivot found
    printf("-1\n");
    return 0;
}
