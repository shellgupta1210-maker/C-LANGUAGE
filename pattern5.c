#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows

    // Outer loop handles the rows, starting from 5 down to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop prints numbers starting from 'i' up to 5
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
