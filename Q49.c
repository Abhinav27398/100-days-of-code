/*
Question:
Write a C program to print the following pattern:
5
45
345
2345
12345
*/

#include <stdio.h>

int main() {
    int i, j;

    // Loop for rows
    for (i = 5; i >= 1; i--) {
        // Loop for numbers in each row
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
