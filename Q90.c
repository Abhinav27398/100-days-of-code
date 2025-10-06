/*
Question:
Write a C program to toggle the case of each character in a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Toggle each character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // lowercase → uppercase
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // uppercase → lowercase
        }
    }

    // Print result
    printf("Toggled string: %s\n", str);

    return 0;
}
