/*
Question:
Write a C program to print all factors of a given number.
A factor of a number is an integer that divides the number completely (no remainder).
*/

#include <stdio.h>

int main() {
    int num, i;


    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
