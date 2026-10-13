#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // 1. Input dimensions of the first matrix
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    // 2. Input dimensions of the second matrix
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Check if matrix multiplication is mathematically valid
    if (c1 != r2) {
        printf("\nError! Column of first matrix must equal row of second matrix.\n");
        return 0;
    }

    int m1[r1][c1], m2[r2][c2], product[r1][c2];

    // 3. Read elements of Matrix 1
    printf("\nEnter elements for Matrix 1 (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    // 4. Read elements of Matrix 2
    printf("\nEnter elements for Matrix 2 (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // 5. Initialize the product matrix with 0s and perform multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0; // Reset accumulator for the cell
            
            // Dot product loop: multiply row elements by column elements
            for (int k = 0; k < c1; k++) {
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // 6. Print the resulting product matrix
    printf("\nResultant Product Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
