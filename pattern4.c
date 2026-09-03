#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows to print

    // Outer loop handles the rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop handles the numbers printed in each row
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
