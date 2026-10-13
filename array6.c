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

    // Two-pointer approach to reverse the array in-place
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap elements at 'start' and 'end' positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers closer to the center
        start++;
        end--;
    }

    // Printing the reversed array
    printf("\nThe reversed array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
