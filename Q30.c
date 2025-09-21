/*
Question:
Write a C program to reverse a given number.
*/

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;  // Store original number for display

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number of %d is: %d\n", original, reversed);

    return 0;
}
