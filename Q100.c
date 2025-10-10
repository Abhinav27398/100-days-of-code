/*
Question:
Write a C program to print all possible substrings of a given string.
Example:
Input  : ABC
Output : A
         AB
         ABC
         B
         BC
         C
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str);  // use fgets(str, sizeof(str), stdin) in modern compilers

    len = strlen(str);

    printf("All substrings of the given string are:\n");

    // Outer loop for substring start index
    for (i = 0; i < len; i++) {
        // Inner loop for substring end index
        for (j = i; j < len; j++) {
            // Print characters from i to j
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}
