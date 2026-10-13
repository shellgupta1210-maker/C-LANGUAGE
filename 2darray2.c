#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    // Ask the user for the matrix dimensions
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

    // Accumulating the sum of all elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j]; // Adds each element to the running total
        }
    }

    // Printing the final sum
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
