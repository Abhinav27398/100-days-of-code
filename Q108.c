/*
Question:
Write a Program to take an integer array nums.
Print an array answer such that answer[i] is equal to the product of all
the elements of nums except nums[i].
The product of any prefix or suffix of nums fits in a 32-bit integer.
*/

#include <stdio.h>

int main() {
    int n;
    
    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n], answer[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Initialize prefix and suffix products
    int prefix[n], suffix[n];
    
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    
    // Calculate final answer
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }
    
    // Print result
    printf("\nProduct of array except self:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
    
    return 0;
}
