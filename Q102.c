/*
Question:
Write a C program to take a sorted array arr[] and an integer x as input.
Find the index (0-based) of the smallest element in arr[] that is greater than or equal to x (ceil of x).
If such an element does not exist, print -1.
If multiple occurrences exist, print the first occurrence.
*/

#include <stdio.h>

int main() {
    int arr[100], n, x, i, ceilIndex = -1;

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input x
    printf("Enter value of x: ");
    scanf("%d", &x);

    // Find ceil of x
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    // Output result
    if (ceilIndex == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);

    return 0;
}
