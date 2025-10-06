/*
Question:
Write a C program to count the frequency of a given character in a string.
*/

#include <stdio.h>

int main() {
    char str[200], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to count
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Print result
    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
