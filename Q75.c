#include <stdio.h>

int main() {
    // 1. Declare and initialize the two matrices (2x2 size)
    int matrixA[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrixB[2][2] = {
        {5, 6},
        {7, 8}
    };

    // 2. Declare the result matrix C (also 2x2)
    int matrixC[2][2];

    // 3. Variables for the loops (i for rows, j for columns)
    int i, j;

    printf("Matrix A:\n");
    printf(" 1 2\n 3 4\n"); // Simple print for context

    printf("\nMatrix B:\n");
    printf(" 5 6\n 7 8\n"); // Simple print for context

    // 4. Core Logic: Use nested loops to iterate through each element
    // The outer loop handles the rows (i)
    for (i = 0; i < 2; i++) {
        // The inner loop handles the columns (j)
        for (j = 0; j < 2; j++) {
            // Addition: C[i][j] = A[i][j] + B[i][j]
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // 5. Print the resulting Matrix C
    printf("\nResultant Matrix C (A + B):\n");

    // Use nested loops again to print the result matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            // Print the element followed by a space
            printf("%d ", matrixC[i][j]);
        }
        // Print a newline after each row is complete
        printf("\n");
    }

    return 0;
}