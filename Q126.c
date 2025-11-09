/*
Question:
Ask the user for a filename. Check if it exists by trying to open it in read mode.
If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Ask user for filename
    printf("Enter filename to open: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // File exists — read and display content
    printf("\n--- File Content (%s) ---\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close file
    fclose(fp);

    printf("\n\n--- End of File ---\n");

    return 0;
}
