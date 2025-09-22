/*
Question:
Write a C program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main() {
    int i, j;

    // Loop for rows
    for (i = 1; i <= 5; i++) {
        // Loop for numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
