#include <stdio.h>

int main() {
    int n1, n2;

    // 1. Input details for the First Array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Input details for the Second Array
    printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Create the destination array with combined size
    int n3 = n1 + n2;
    int mergedArr[n3];

    // 4. Copy elements from the first array into the merged array
    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

    // 5. Copy elements from the second array into the remaining slots
    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i]; // Offset the index by n1
    }

    // 6. Print the merged array
    printf("\nThe merged array is:\n");
    for (int i = 0; i < n3; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
