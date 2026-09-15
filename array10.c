#include <stdio.h>

int main() {
    int n, key;

    // Ask the user for the current number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare array with size n + 1 to accommodate the new element
    int arr[n + 1]; 

    // Reading elements into the array
    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the element to insert
    printf("\nEnter the element to insert: ");
    scanf("%d", &key);

    // Start from the end of the array
    int i = n - 1;

    // Shift elements of arr[0..n-1] that are greater than key
    // to one position ahead of their current position
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the key at its correct sorted position
    arr[i + 1] = key;
    
    // Increase the element count
    n++;

    // Print the updated array
    printf("\nArray after insertion:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
