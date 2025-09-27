#include <stdio.h>
#include <stdbool.h> // Include this for the 'bool' data type (optional, but good practice)

#define MAX_SIZE 10 // Define a maximum size for the matrix

int main() {
    int n, i, j;
    int matrix[MAX_SIZE][MAX_SIZE];
    // Use a boolean variable to track symmetry status
    bool is_symmetric = true; 

    // 1. Get the size of the square matrix
    printf("Enter the size of the square matrix (N x N, max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Basic validation: Matrix must be a square matrix and within bounds
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid size entered.\n");
        return 1; // Exit with error code
    }

    // 2. Input Matrix Elements
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 3. Check for Symmetry
    // We only need to check the elements above the main diagonal (i < j)
    // because checking A[i][j] vs A[j][i] covers both sides.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Check the core condition: A[i][j] must equal A[j][i]
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = false; // Found a mismatch
                break; // Exit the inner loop
            }
        }
        if (is_symmetric == false) {
            break; // Exit the outer loop immediately
        }
    }

    // 4. Output the Result
    printf("\n--- Result ---\n");
    if (is_symmetric) {
        printf("The matrix IS symmetric (A = A^T).\n");
    } else {
        printf("The matrix IS NOT symmetric (A != A^T).\n");
    }

    return 0;
}