#include <stdio.h>

int main() {
    int size;
    int sum = 0;

    // Ask the user for the size of the square matrix (Rows = Columns)
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    // Reading elements into the matrix
    printf("\nEnter elements for a %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sum of the main diagonal elements
    // Optimization: Use a single loop since row index == column index
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    // Printing the matrix for visibility
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Printing the final sum
    printf("\nThe sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
