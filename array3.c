#include <stdio.h>

int main() {
    int n;
    int even_count = 0, odd_count = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare a 1D array of size n

    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Traverse the array to count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;  // Increment even counter if divisible by 2
        } else {
            odd_count++;   // Increment odd counter otherwise
        }
    }

    // Printing the results
    printf("\nTotal Even elements = %d\n", even_count);
    printf("Total Odd elements = %d\n", odd_count);

    return 0;
}
