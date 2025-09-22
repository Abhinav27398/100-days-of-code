/*
Question:
Write a C program to find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    long num;
    int digit, i;
    int freq[10] = {0};  // Array to store frequency of digits 0-9

    // Input number
    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if (num < 0) {
        num = -num; // Make number positive
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    int maxFreq = freq[0];
    int maxDigit = 0;

    for (i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most times: %d (occurs %d times)\n", maxDigit, maxFreq);

    return 0;
}
