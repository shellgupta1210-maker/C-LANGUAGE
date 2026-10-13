#include <stdio.h>

int main() {
    int rows, cols;

    // Ask the user for the matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Reading elements into the matrix
    printf("\nEnter elements for a %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the original matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Diagonal Traversal Algorithm
    printf("\nDiagonal Traversal Output:\n");
    
    // There are a total of (rows + cols - 1) diagonal lines
    for (int slice = 0; slice < (rows + cols - 1); slice++) {
        
        // Determine the starting row for the current diagonal slice
        int r = (slice < rows) ? slice : rows - 1;
        
        // Determine the starting column for the current diagonal slice
        int c = (slice < rows) ? 0 : slice - rows + 1;

        // Traverse downward and to the right along the current diagonal slice
        while (r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--; // Move up a row
            c++; // Move right a column
        }
    }
    printf("\n");

    return 0;
}
