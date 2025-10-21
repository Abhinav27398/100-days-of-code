/*
Question:
Write a program to take an array arr[] of integers as input.
Find the Next Greater Element (NGE) for each element of the array.
If no greater element exists, print -1 for that element.
*/

#include <stdio.h>

int main() {
    int n, i, j;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], nge[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find Next Greater Element for each element
    for (i = 0; i < n; i++) {
        nge[i] = -1;  // Default value
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break;
            }
        }
    }

    // Print results
    printf("\nNext Greater Elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], nge[i]);
    }

    return 0;
}
