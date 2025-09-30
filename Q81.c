/*
Question:
Write a C program to count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null character
    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    // Adjust count if newline character is included by fgets
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
