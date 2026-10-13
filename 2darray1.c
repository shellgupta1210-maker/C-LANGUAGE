#include <stdio.h>

int main() {
    int rows, cols;

    // Ask the user for dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a 2D array

    // Reading elements into the matrix
    printf("\nEnter elements for a %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix in grid format
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); // \t creates neat column spacing
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
