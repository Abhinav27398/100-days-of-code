/*
Question:
Write a C program to count the number of positive, negative, and zero elements in a one-dimensional array.
*/

#include <stdio.h>

int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 0;
    }

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Number of positive elements = %d\n", positiveCount);
    printf("Number of negative elements = %d\n", negativeCount);
    printf("Number of zeros = %d\n", zeroCount);

    return 0;
}
