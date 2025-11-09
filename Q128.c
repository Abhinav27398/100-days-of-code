/*
Question:
Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.
*/

#include <stdio.h>
#include <ctype.h>  // for isalpha(), tolower()

int main() {
    FILE *file;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read each character from the file
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // convert to lowercase for easy checking

        if (isalpha(ch)) { // check if the character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    // Display result
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
