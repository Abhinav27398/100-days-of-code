/*
Question:
Write a C program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>

int main() {
    int num;
    int binary[32];  
    int i = 0;

    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }


    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    
    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
