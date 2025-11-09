/*
Question:
Write a program that reads text from input.txt, converts all lowercase letters
to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(inputFile);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion completed. Text written to output.txt\n");

    return 0;
}
