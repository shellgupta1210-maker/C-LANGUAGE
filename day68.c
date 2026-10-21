#include <stdio.h>

int main() {
    int n;

    // Take the value of n from the user
    printf("Enter the value of n (maximum number in the range 0 to n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. n must be at least 1.\n");
        return 1;
    }

    // The array will hold 'n' elements because one element from the 0 to n range is missing
    int arr[n];
    long long actual_sum = 0;

    printf("Enter %d integers (from 0 to %d, with one number missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i]; // Add up the elements as they are entered
    }

    // Calculate the expected sum of all numbers from 0 to n
    // Using long long to prevent integer overflow for large values of n
    long long expected_sum = ((long long)n * (n + 1)) / 2;

    // The missing number is the difference between what we expect and what we got
    int missing_number = (int)(expected_sum - actual_sum);

    printf("The missing number is: %d\n", missing_number);

    return 0;
}
