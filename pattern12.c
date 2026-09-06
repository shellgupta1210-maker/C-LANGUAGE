#include <stdio.h>

int main() {
    int n;

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

    // Printing elements of the array
    printf("\nThe elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
