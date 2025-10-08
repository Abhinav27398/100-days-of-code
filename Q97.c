/*
Question:
Write a C program to print the initials of a name.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);  // use fgets(name, sizeof(name), stdin) in modern compilers

    printf("Initials: ");

    // Print first letter if not a space
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print letter after every space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}
