#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Used to handle large numbers

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorials are not defined for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i; // Multiplies fact by each number up to n
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
