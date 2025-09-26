/*
Question:
Write a C program to find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];  // Array to store sum of each row

    // Initialize rowSum array to 0
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];  // Add element to corresponding row sum
        }
    }

    // Print matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print row sums
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
