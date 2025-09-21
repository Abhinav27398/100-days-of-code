/*
Question:
Write a C program to print numbers from 1 to n.
*/

#include <stdio.h>

int main() {
    int n, i;

    // Input the value of n
    printf("Enter a positive number n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n using for loop
    printf("Numbers from 1 to %d:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
