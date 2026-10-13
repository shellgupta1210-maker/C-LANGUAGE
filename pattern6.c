#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows

    // Outer loop handles the rows, counting down from 5 to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop 1: Prints the leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Inner loop 2: Prints the stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
