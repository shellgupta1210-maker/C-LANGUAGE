#include <stdio.h>

int main() {
    int rows, cols;

    // Ask the user for the matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows]; // Transposed matrix dimensions are flipped

    // Reading elements into the original matrix
    printf("\nEnter elements for a %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Computing the Transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Element at row 'i', column 'j' shifts to row 'j', column 'i'
            transpose[j][i] = matrix[i][j];
        }
    }

    // Printing the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Printing the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {       // Loops up to 'cols' of the original matrix
        for (int j = 0; j < rows; j++) {   // Loops up to 'rows' of the original matrix
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
