/*
Question:
Write a C program to input a character and check whether it is a vowel 
or a consonant using if–else.
*/

#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if alphabet or not
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check vowel condition
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        }
        else {
            printf("%c is a consonant.\n", ch);
        }
    } 
    else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}