/*
Question:
Write a program to take an integer array arr[] as input.
Find the maximum sum of any contiguous subarray using Kadane's algorithm.
If all elements are negative, print the largest element.
*/

#include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];    // Maximum sum found so far
    int currentSum = arr[0]; // Maximum sum ending at current position

    for (int i = 1; i < n; i++) {
        // If currentSum is negative, start new subarray at arr[i]
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        // Update maxSum if currentSum is greater
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of contiguous subarray: %d\n", maxSum);

    return 0;
}
