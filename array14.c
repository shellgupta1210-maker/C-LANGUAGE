#include <stdio.h>
#include <limits.h> // Needed for INT_MIN

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid Size! Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n]; 

    // Reading elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize both tracking variables to the smallest possible integer value
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    // Traverse the array once
    for (int i = 0; i < n; i++) {
        // If current element is larger than 'largest', update both variables
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        // If current element is smaller than 'largest' but larger than 'second_largest'
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Printing the result
    if (second_largest == INT_MIN) {
        printf("\nThere is no second largest distinct element in the array.\n");
    } else {
        printf("\nThe second largest element is: %d\n", second_largest);
    }

    return 0;
}
