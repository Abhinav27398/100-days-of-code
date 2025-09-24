/*
Question:
Write a C program to rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int n, k, i;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    printf("Enter the number of positions to rotate to the right: ");
    scanf("%d", &k);

    // Adjust k if greater than n
    k = k % n;

    // Temporary array to hold rotated result
    int rotated[n];

    // Copy last k elements to the beginning
    for (i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy the remaining elements
    for (i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

    // Print rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
