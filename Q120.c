/*
Question:
Write a program to take a string input.
Change it to sentence case.
*/

#include <stdio.h>
#include <ctype.h>  // for toupper() and tolower()

int main() {
    char str[200];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to sentence case
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Capitalize first letter
        } else {
            str[i] = tolower(str[i]);  // Make all others lowercase
        }
    }

    printf("\nSentence case string: %s\n", str);

    return 0;
}
