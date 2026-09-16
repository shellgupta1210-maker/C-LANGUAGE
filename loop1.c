#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate that the user entered a positive number
    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
    } else {
        printf("Numbers from 1 to %d:\n", n);
        
        // Loop from 1 up to n and print each number
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); // Print a new line at the end
    }

    return 0;
}
