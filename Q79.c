/*
Question:
Write a C program to perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main() {
    int m, n, i, j, k;

    // Input matrix size
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Traverse all diagonals starting from first row
    for (k = 0; k < n; k++) {
        i = 0; 
        j = k;
        while (i < m && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse remaining diagonals starting from last column
    for (k = 1; k < m; k++) {
        i = k; 
        j = n - 1;
        while (i < m && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
