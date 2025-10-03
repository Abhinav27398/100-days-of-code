/*
Question:
Write a C program to count spaces, digits, and special characters in a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, specials = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // letters ignored
        } 
        else if (str[i] != '\n') {  // ignore newline from fgets
            specials++;
        }
    }

    // Print results
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}
