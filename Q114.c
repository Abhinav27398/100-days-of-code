/*
Question:
Write a program to take a string s as input.
Find and print the length of the longest substring without repeating characters.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];  // Stores last index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;  // Initialize all as not seen

    int start = 0;   // Start index of current window
    int maxLen = 0;  // Maximum length found

    for (int i = 0; i < n; i++) {
        // If the character has appeared before and lies inside the current window
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;  // Update last seen index
        int currLen = i - start + 1;         // Current window length

        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
