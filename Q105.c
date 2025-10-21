/*
Question:
Write a C program to take an integer array nums[] of size n,
and print the majority element.
The majority element is the element that appears strictly more than floor(n / 2) times.
Print -1 if no such element exists.
*/

#include <stdio.h>

int main() {
    int n, i, j, count, majority = -1;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find majority element
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j])
                count++;
        }
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    // Print result
    if (majority != -1)
        printf("Majority element: %d\n", majority);
    else
        printf("-1\n");

    return 0;
}
