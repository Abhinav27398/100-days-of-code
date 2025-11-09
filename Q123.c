/*
Question:
Write a C program to read a text file and count the total number of
characters, words, and lines.
A word is defined as a sequence of non-space characters separated by
spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // flag to track if currently inside a word

    // Input file name
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read each character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        // Check word boundaries
        if (isspace(ch)) {
            inWord = 0;  // End of a word
        } else if (!inWord) {
            inWord = 1;  // Start of a new word
            words++;
        }
    }

    // Close file
    fclose(fp);

    // If file not empty but doesn’t end with newline, count last line
    if (characters > 0 && ch != '\n')
        lines++;

    // Display results
    printf("\nFile Statistics:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
