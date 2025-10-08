/*
Question:
Write a C program to print the initials of a name with the surname displayed in full.
Example:
Input  : Abhinav Singh Rajput
Output : A.S. Rajput
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char words[10][20];
    int i, j = 0, k = 0, wordCount = 0;

    printf("Enter your full name: ");
    gets(name);  // use fgets(name, sizeof(name), stdin) in modern compilers

    // Split name into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        } else {
            words[wordCount][j++] = name[i];
        }
    }
    words[wordCount][j] = '\0';
    wordCount++;

    // Print initials for all words except last one
    printf("Formatted Name: ");
    for (i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    // Print last word (surname) in full
    printf("%s\n", words[wordCount - 1]);

    return 0;
}
