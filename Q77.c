/*
Question:
Write a C program to check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    // Input size of square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements and check distinctness
    int diag[n], k = 0;

    for (i = 0; i < n; i++) {
        diag[k++] = matrix[i][i];  // main diagonal element
    }

    // Check for duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                flag = 0;  // found duplicate
                break;
            }
        }
        if (flag == 0) break;
    }

    // Print result
    if (flag)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
