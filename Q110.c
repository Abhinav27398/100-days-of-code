/*
Question:
Write a program to take an integer array arr[] and an integer k as inputs.
For each subarray of size k moving from left to right,
find the maximum element and print them separated by spaces.
*/

#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k > n || k <= 0) {
        printf("Invalid subarray size!\n");
        return 0;
    }

    printf("Maximum elements of each subarray of size %d:\n", k);

    // Loop through all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];  // initialize max for this window
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }
    printf("\n");

    return 0;
}
