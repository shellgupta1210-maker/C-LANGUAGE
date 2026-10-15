#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;

    // Take the size of the array as input
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Take array elements as input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Take the value of k as input
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Validate the value of k
    if (k < 1 || k > n) {
        printf("Invalid value of k! k must be between 1 and %d.\n", n);
        free(arr);
        return 1;
    }

    // Sort the array in ascending order using qsort
    // Time Complexity: O(n log n)
    qsort(arr, n, sizeof(int), compare);

    // The kth smallest element will be at index k - 1
    printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);

    // Free allocated memory
    free(arr);

    return 0;
}
