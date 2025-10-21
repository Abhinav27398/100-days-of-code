/*
Question:
Write a C program to take a sorted array (say nums[]) and an integer (say target) as inputs.
The array may contain repeated elements.
Print the first and last occurrence of the target (their indices).
If the target is not found, print -1, -1.
*/

#include <stdio.h>

int main() {
    int nums[100], n, target;
    int first = -1, last = -1;
    int i;

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Input target element
    printf("Enter target element: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    // Print result
    if (first == -1)
        printf("-1, -1\n");
    else
        printf("First occurrence: %d (index %d)\nLast occurrence: %d (index %d)\n", 
               nums[first], first, nums[last], last);

    return 0;
}
