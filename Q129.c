/*
Question:
A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    int num, count = 0;
    long sum = 0;   // use long to handle large sums
    float average;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read all integers from file
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    // Compute and display sum and average
    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        average = (float)sum / count;
        printf("Sum = %ld\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
