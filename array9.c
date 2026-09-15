#include <stdio.h>

int main() {
    int n, search_element, found_index = -1;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Reading sorted elements into the array
    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Ask the user for the value they want to search for
    printf("\nEnter the element to search: ");
    scanf("%d", &search_element);

    // Binary Search Algorithm
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents potential integer overflow

        // Check if the element is present at mid
        if (arr[mid] == search_element) {
            found_index = mid;
            break; // Element found, exit the loop early
        }
        
        // If element is smaller than mid, it must be in the left half
        if (arr[mid] > search_element) {
            high = mid - 1;
        } 
        // If element is greater than mid, it must be in the right half
        else {
            low = mid + 1;
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
