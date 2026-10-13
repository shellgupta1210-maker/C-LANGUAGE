#include <stdio.h>

// Helper function to reverse a specific section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    // 1. Get array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get rotation value k
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);

    // Optimize k: rotating an array of size n by n positions returns it to the start
    k = k % n; 
    
    // If k is negative, convert it to an equivalent positive right rotation
    if (k < 0) {
        k = k + n;
    }

    if (k > 0) {
        // Reversal Algorithm Steps:
        // Step 1: Reverse the last k elements
        reverse(arr, n - k, n - 1);

        // Step 2: Reverse the first (n - k) elements
        reverse(arr, 0, n - k - 1);

        // Step 3: Reverse the entire array
        reverse(arr, 0, n - 1);
    }

    // 4. Print the rotated array
    printf("\nArray after right rotation by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
