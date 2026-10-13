#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    // Ask the user for the matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Step 1: A symmetric matrix must be a square matrix
    if (rows != cols) {
        printf("\nThe matrix is NOT symmetric (It must be a square matrix where rows = columns).\n");
        return 0;
    }

    int matrix[rows][cols];

    // Step 2: Read matrix elements from the user
    printf("\nEnter elements for a %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Check symmetry
    bool isSymmetric = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Compare the element with its transposed coordinate
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break; // Exit the inner loop early if a mismatch is found
            }
        }
        if (!isSymmetric) {
            break; // Exit the outer loop
        }
    }

    // Step 4: Print the matrix and the final result
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    if (isSymmetric) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is NOT Symmetric.\n");
    }

    return 0;
}
