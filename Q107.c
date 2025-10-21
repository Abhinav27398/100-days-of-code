/*
Question:
Write a program to take an array arr[] of integers as input.
Find the Previous Greater Element (PGE) for each element of the array.
If no greater element exists on the left, print -1 for that element.
*/

#include <stdio.h>

int main() {
    int n, i, j;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], pge[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find Previous Greater Element for each element
    for (i = 0; i < n; i++) {
        pge[i] = -1;  // Default value
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break;
            }
        }
    }

    // Print results
    printf("\nPrevious Greater Elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], pge[i]);
    }

    return 0;
}
