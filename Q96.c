/*
Question:
Write a C program to reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    char *wordStart = NULL;
    int i;

    printf("Enter a sentence: ");
    gets(sentence);  // use fgets() in modern compilers

    for (i = 0; sentence[i] != '\0'; i++) {
        if (wordStart == NULL && sentence[i] != ' ')
            wordStart = &sentence[i];

        if ((sentence[i + 1] == ' ' || sentence[i + 1] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &sentence[i]);
            wordStart = NULL;
        }
    }

    printf("Sentence after reversing each word:\n%s\n", sentence);
    return 0;
}
