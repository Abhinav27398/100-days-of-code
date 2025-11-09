/*
Question:
Write a C program to open an existing file in append mode and allow the user
to enter a new line of text. Append the text at the end without overwriting
existing content.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    // Take filename as input
    printf("Enter filename to open in append mode: ");
    scanf("%s", filename);
    getchar(); // Clear newline left by scanf

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Take a new line of text from user
    printf("Enter the line you want to append:\n");
    fgets(line, sizeof(line), stdin);

    // Append new line to file
    fprintf(fp, "%s", line);

    // Close file
    fclose(fp);

    printf("\nText successfully appended to '%s'.\n", filename);

    return 0;
}
