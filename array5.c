#include <stdio.h>

int main() {
    int n, search_element, found_index = -1;

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

    // Ask the user for the value they want to search for
    printf("\nEnter the element to search: ");
    scanf("%d", &search_element);

    // Linear Search Algorithm
    for (int i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            found_index = i; // Store the matching index
            break;           // Element found, exit the loop early
        }
    }

    // Printing the results
    if (found_index != -1) {
        printf("Element %d found at index %d (Position %d).\n", search_element, found_index, found_index + 1);
    } else {
        printf("Element %d is not present in the array.\n", search_element);
    }

    return 0;
}
