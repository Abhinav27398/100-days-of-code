/*
Question:
Write a C program to change the date format from dd/mm/yyyy to dd-MMM-yyyy.
Example:
Input  : 12/04/2024
Output : 12-Apr-2024
*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in dd/mm/yyyy format: ");
    gets(date);  // use fgets(date, sizeof(date), stdin) in modern compilers

    // Extract day, month, year using sscanf
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Validate month range
    if (month < 1 || month > 12) {
        printf("Invalid month entered!\n");
        return 0;
    }

    printf("Formatted Date: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
