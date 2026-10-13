#include <stdio.h>

int main() {
    int n, element, position;

    // Ask the user for the current number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare array with size n + 1 to accommodate the new element
    int arr[n + 1]; 

    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the element and the insertion position
    printf("\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d) where you want to insert it: ", n + 1);
    scanf("%d", &position);

    // Validate if the input position is within valid range
    if (position < 1 || position > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
    } else {
        // Shift elements from the end of the array down to the chosen position
        // Index = position - 1
        for (int i = n - 1; i >= position - 1; i--) {
            arr[i + 1] = arr[i];
        }

        // Insert the new element at the designated slot
        arr[position - 1] = element;

        // Increment the total number of elements
        n++;

        // Print the updated array
        printf("\nArray after insertion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
