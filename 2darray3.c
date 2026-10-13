#include <stdio.h>

int main() {
    int rows, cols;

    // Ask the user for the matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows]; // 1D array to store the sum of each row

    // Reading elements into the matrix
    printf("\nEnter elements for a %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sum of each row
    for (int i = 0; i < rows; i++) {
        int current_row_sum = 0; // Reset sum for the current row
        for (int j = 0; j < cols; j++) {
            current_row_sum += matrix[i][j];
        }
        rowSums[i] = current_row_sum; // Store the computed sum in the 1D array
    }

    // Printing the row sums stored in the array
    printf("\nThe sums of each row are:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of Row %d = %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
