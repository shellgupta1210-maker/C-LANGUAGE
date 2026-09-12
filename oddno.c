#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Asking user for the number of terms
    printf("Enter the value of n (number of terms): ");
    scanf("%d", &n);

    // Loop to calculate the sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        // The i-th odd number is given by (2 * i - 1)
        sum += (2 * i - 1); 
    }

    // Displaying the result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
