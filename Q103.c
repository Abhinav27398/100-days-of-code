/*
Question:
Write a C program to take an array of integers as input and find the pivot index.
The pivot index is where the sum of elements on the left equals the sum on the right.
If no such index exists, print -1.
Print the leftmost pivot index if multiple exist.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int totalSum = 0, leftSum = 0;

    // Input size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];  // Calculate total sum
    }

    // Find pivot index
    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    // If no pivot found
    printf("-1\n");
    return 0;
}
