/*
Question:
Write a C program to remove all vowels from a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove vowels (both uppercase and lowercase)
    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // terminate modified string

    // Print result
    printf("String after removing vowels: %s\n", str);

    return 0;
}
