/*
Question:
Write a C program to search for an element in a one-dimensional array using linear search.
Linear search checks each element one by one until the target is found.
*/

#include <stdio.h>

int main() {
    int n, i, target, found = 0;

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

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found at position %d.\n", target, i+1); // 1-based position
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
