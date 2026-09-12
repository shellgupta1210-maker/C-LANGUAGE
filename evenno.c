#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    // Ask the user to input the upper limit 'n'
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check if there are no even numbers in the range
    if (n < 2) {
        printf("There are no even numbers between 1 and %d.\n", n);
        return 0;
    }

    // Loop through even numbers starting from 2 up to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Print the final result
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
