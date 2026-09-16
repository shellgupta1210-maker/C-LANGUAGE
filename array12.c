#include <stdio.h>

int main() {
    int n, position;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the position of the element to delete
    printf("\nEnter the position (1 to %d) of the element to delete: ", n);
    scanf("%d", &position);

    // Validate if the input position is within the valid range
    if (position < 1 || position > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
    } else {
        // Shift elements from the right of the chosen position one slot to the left
        // Index = position - 1
        for (int i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrement the total number of elements
        n--;

        // Print the updated array
        printf("\nArray after deletion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

