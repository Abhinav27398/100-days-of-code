/*
Question:
Write a C program to check if a string is a palindrome.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j, len, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline from fgets if present
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Check palindrome
    i = 0;
    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    // Print result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}