/*
Question:
Write a C program to count vowels and consonants in a string.
*/

#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for easy comparison

        if (ch >= 'a' && ch <= 'z') {  // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
