/*
Question:
Write a C program to check if a number is prime.
A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
*/

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  
    } else {
        for (i = 2; i <= num / 2; i++) {  
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
