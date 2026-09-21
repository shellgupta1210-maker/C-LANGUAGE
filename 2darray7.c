#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    // Ask the user for the matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Step 1: Diagonal elements only exist in a square matrix
    if (rows != cols) {
        printf("\nInvalid dimensions! The matrix must be a square matrix (rows = columns).\n");
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

    // Step 3: Check if the diagonal elements are distinct
    bool areDistinct = true;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            // Compare diagonal element at row 'i' with diagonal element at row 'j'
            if (matrix[i][i] == matrix[j][j]) {
                areDistinct = false;
                break; // Exit inner loop early if a duplicate is found
            }
        }
        if (!areDistinct) {
            break; // Exit outer loop
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

    // Print the diagonal items for visibility
    printf("\nDiagonal elements are: ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    if (areDistinct) {
        printf("Result: All diagonal elements are distinct.\n");
    } else {
        printf("Result: Diagonal elements contain duplicates (NOT distinct).\n");
    }

    return 0;
}
