#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 30; // Find all prime numbers up to this value
    
    printf("Prime numbers between 1 and %d are:\n", n);

    // 1 is not a prime number, so we start the check from 2
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        // Check if 'i' has any divisors from 2 up to i/2 (or sqrt(i))
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; // Found a divisor, so it's not prime
                break;           // Exit the inner loop early
            }
        }

        // If no divisors were found, 'i' is prime
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
