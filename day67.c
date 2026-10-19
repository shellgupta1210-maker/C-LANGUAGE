#include <stdio.h>

int main() {
    int m, n;

    // 1. Input size and elements of the first sorted array
    printf("Enter the size of the first sorted array (m): ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d sorted elements for the first array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Input size and elements of the second sorted array
    printf("Enter the size of the second sorted array (n): ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d sorted elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Create the third array to store the merged elements
    int mergedSize = m + n;
    int merged[mergedSize];

    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2
    int k = 0; // Pointer for merged array

    // 4. Traverse both arrays and compare elements
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // 5. Store remaining elements of the first array (if any)
    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // 6. Store remaining elements of the second array (if any)
    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // 7. Print the final sorted merged array
    printf("\nThe merged sorted array is:\n");
    for (int p = 0; p < mergedSize; p++) {
        printf("%d ", merged[p]);
    }
    printf("\n");

    return 0;
}
