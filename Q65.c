 /*
Question:
Write a C program to search for an element in a sorted array using binary search.
Binary search repeatedly divides the search interval in half to find the target.
*/

#include <stdio.h>

int main() {
    int n, i, target;
    
    // Input size of the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 0;
    }

    int arr[n];

    // Input elements (assume sorted order)
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Binary search
    int low = 0, high = n - 1, mid, found = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            found = 1;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found) {
        printf("Element %d found at position %d.\n", target, mid + 1); // 1-based position
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
