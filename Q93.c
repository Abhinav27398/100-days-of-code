/*
Question:
Write a C program to check if two strings are anagrams of each other.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, flag = 1;

    // Input strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are NOT anagrams.\n");
        return 0;
    }

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    // Result
    if (flag)
        printf("The strings are ANAGRAMS of each other.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
