/*
Question:
Write a C program to find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}; // to count frequency of each lowercase letter
    int i, found = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find first repeating lowercase alphabet
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; // increment frequency
            if (freq[ch - 'a'] == 2) { // if repeating
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
