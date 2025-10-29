/*
Question:
Write a program to take an integer array arr[] and an integer k as inputs.
Find and print the kth smallest element in the array.
*/

#include <stdio.h>

// Function to sort array using simple selection sort
void sortArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

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
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Validate k
    if (k <= 0 || k > n) {
        printf("Invalid value of k!\n");
        return 0;
    }

    // Sort array
    sortArray(arr, n);

    // Print kth smallest element
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
