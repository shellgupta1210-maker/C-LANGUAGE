#include <stdio.h>

int main() {
    int n, sum = 0;

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

    // Accumulating the sum of elements
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Adds each element to the running total
    }

    // Printing the final sum
    printf("\nThe sum of all elements in the array is: %d\n", sum);

    return 0;
}
