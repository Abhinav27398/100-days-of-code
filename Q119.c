/*
Question:
Write a program to take an integer array as input.
Only one element will be repeated.
Print the repeated element.
Try to find the result in one single iteration.
*/

#include <stdio.h>

int main() {
    int n;
    
    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int xorAll = 0;   // XOR of all array elements
    int xorRange = 0; // XOR of numbers from 1 to n-1

    printf("Enter %d elements (one number is repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xorAll ^= arr[i];  // XOR of all elements
    }

    // XOR of numbers from 1 to n-1
    for (int i = 1; i < n; i++) {
        xorRange ^= i;
    }

    // XOR of both gives the repeated element
    int repeated = xorAll ^ xorRange;

    printf("\nThe repeated element is: %d\n", repeated);

    return 0;
}
