/*
Question:
Write a C program to find the longest word in a given sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLength = 0, length = 0;

    printf("Enter a sentence: ");
    gets(sentence);  // Read the sentence (use fgets in modern compilers)

    for (i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0'; // End current word
            length = strlen(word);
            if (length > maxLength) {
                maxLength = length;
                strcpy(longest, word);
            }
            j = 0; // Reset for next word
        }

        if (sentence[i] == '\0')
            break;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}
