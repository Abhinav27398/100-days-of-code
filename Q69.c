/*
Question:
Write a C program to find the second largest element in an array.
*/

#include <stdio.h>

int main() {
    int n, i;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements to find the second largest.\n");
        return 0;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    // Initialize first and second
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    // Traverse array to find largest and second largest
    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (first == second) {
        printf("No distinct second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
