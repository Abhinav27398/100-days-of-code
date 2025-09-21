/*
Question:
Write a C program to find the product of odd digits of a number.
*/

#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;  
    int hasOdd = 0;         


    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; 
    if (num < 0) {
        num = -num;  
    }

    
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d is: %lld\n", original, product);
    } else {
        printf("No odd digits in %d. Product is 0.\n", original);
    }

    return 0;
}
