/*
Question:
Write a C program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i;

    // Group 1: 1 star
    printf("*\n\n");

    // Group 2: 4 stars
    for (i = 1; i <= 4; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 3: 5 stars
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 4: 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 5: 1 star
    printf("*\n");

    return 0;
}
