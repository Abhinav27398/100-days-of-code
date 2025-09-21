/*
Question:
Write a C program to find the 1's complement of a binary number and print it.
The 1's complement of a binary number is obtained by inverting all bits (0 → 1, 1 → 0).
*/

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int i, valid = 1;

    
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    
    for (i = 0; i < len; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (!valid) {
        printf("Invalid binary number!\n");
        return 0;
    }

    
    printf("1's complement: ");
    for (i = 0; i < len; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
