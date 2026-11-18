#include <stdio.h>

int main() {
    int arr[50] = {10, 20, 30, 40, 50}; // Capacity of 50
    int n = 5;                          // Current number of elements
    int item = 35;                      // Element to insert
    int i;

    // Start from the last element and shift larger elements to the right
    i = n - 1;
    while (i >= 0 && arr[i] > item) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the new element at the correct position
    arr[i + 1] = item;
    n++; // Increase the element count

    // Print the updated array
    printf("Array after insertion:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
