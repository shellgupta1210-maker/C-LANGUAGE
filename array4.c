#include <stdio.h>

int main() {
    int n;
    int positive_count = 0, negative_count = 0, zero_count = 0;

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

    // Traverse the array to count positive, negative, and zero numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++; // Increment if the number is greater than 0
        } else if (arr[i] < 0) {
            negative_count++; // Increment if the number is less than 0
        } else {
            zero_count++;     // Increment if the number is exactly 0
        }
    }

    // Printing the results
    printf("\nTotal Positive elements = %d\n", positive_count);
    printf("Total Negative elements = %d\n", negative_count);
    printf("Total Zero elements = %d\n", zero_count);

    return 0;
}
