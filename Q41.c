/*
Question:
Write a C program to swap the first and last digit of a number.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    // Find number of digits
    digits = (int)log10(num) + 1;

    // Extract first and last digits
    first = num / pow(10, digits - 1);
    last = num % 10;

    // If only one digit, no swapping needed
    if (digits == 1) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Remove first and last digit, then swap and rebuild number
    int middle = (num % (int)pow(10, digits - 1)) / 10;
    swappedNum = last * pow(10, digits - 1) + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
