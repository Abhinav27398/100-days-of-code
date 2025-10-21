/*
Question:
Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main() {
    int n, k;

    // Input array size
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

    // Step 1: Find the sum of the first k elements
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Use sliding window technique
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; // slide the window
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    // Step 3: Print result
    printf("Maximum sum of subarrays of size %d is: %d\n", k, maxSum);

    return 0;
}
