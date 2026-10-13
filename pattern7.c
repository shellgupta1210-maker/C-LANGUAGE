#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows

    // Outer loop handles the rows, starting from 5 down to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop 1: Prints the leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        
        // Inner loop 2: Prints numbers starting from 'i' up to 5
        for (int k = i; k <= rows; k++) {
            printf("%d", k);
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
