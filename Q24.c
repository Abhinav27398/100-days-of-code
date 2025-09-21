/*
Question:
Write a C program to calculate electricity bill based on units consumed with the following rates:
First 100 units       : ₹5/unit
Next 100 units        : ₹7/unit
Next 100 units        : ₹10/unit
Above 300 units       : ₹12/unit
*/

#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    // Input number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("No bill. Invalid or zero units.\n");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    }
    else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    if (units > 0) {
        printf("Total Electricity Bill: ₹%d\n", bill);
    }

    return 0;
}
