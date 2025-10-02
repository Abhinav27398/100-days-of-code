/*
Question:
Write a C program to reverse a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j;
    char temp;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets if present
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Reverse string by swapping
    i = 0;
    j = len - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    // Print result
    printf("Reversed string: %s\n", str);

    return 0;
}