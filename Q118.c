/*
Question:
Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one.
Print that missing number.
*/

#include <stdio.h>

int main() {
    int n;
    
    // Input size of array (which is actually n, but contains numbers from 0 to n)
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    // Input array elements
    printf("Enter %d elements (numbers from 0 to %d with one missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Keep track of the sum of elements
    }

    // Expected sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Missing number is the difference
    int missing = totalSum - sum;

    printf("\nThe missing number is: %d\n", missing);

    return 0;
}
