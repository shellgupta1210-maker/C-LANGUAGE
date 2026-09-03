#include <stdio.h>

int main() {
    int rows = 5; // You can change this value or take user input

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print stars in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
