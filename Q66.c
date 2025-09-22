/*
Question:
Write a C program to insert an element into a sorted array at the appropriate position,
so that the array remains sorted.
*/

#include <stdio.h>

int main() {
    int n, i, pos, element;

    // Input size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 0;
    }

    int arr[n+1]; // Extra space for new element

    // Input elements in sorted order
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the correct position to insert
    pos = n; // Default position is at the end
    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the new element
    arr[pos] = element;

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
