/*
Question:
Write a program to take an integer array arr[] and an integer k as inputs.
For each subarray of size k moving from left to right,
print the first negative integer.
If no negative integer exists in a subarray, print 0 for that window.
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

    // Input subarray size
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k > n || k <= 0) {
        printf("Invalid subarray size!\n");
        return 0;
    }

    printf("First negative integer in each subarray of size %d:\n", k);

    // Loop through all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;  // default value if no negative found
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;  // first negative found
            }
        }
        printf("%d ", firstNegative);
    }

    printf("\n");
    return 0;
}
