/*
Question:
Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted.
Print the merged array.
*/

#include <stdio.h>

int main() {
    int m, n;
    
    // Input sizes of two arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], merged[m + n];
    
    // Input first sorted array
    printf("Enter %d elements of first sorted array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second sorted array
    printf("Enter %d elements of second sorted array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge process (like merge step in merge sort)
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements from arr1 (if any)
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2 (if any)
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    // Print merged sorted array
    printf("\nMerged sorted array:\n");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}
