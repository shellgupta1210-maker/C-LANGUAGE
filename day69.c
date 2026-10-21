#include <stdio.h>
#include <stdbool.h>

#define MAX_VALUE 100000 // Adjust based on maximum expected input value

int main() {
    int n;

    // Get array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    // Lookup array initialized to false to keep track of seen elements
    static bool seen[MAX_VALUE] = {false}; 
    int repeated_element = -1;
    bool found = false;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // If we haven't found the duplicate yet, check the lookup tracker
        if (!found) {
            if (seen[arr[i]]) {
                repeated_element = arr[i];
                found = true; // Mark as found so we don't overwrite it if others repeat
            } else {
                seen[arr[i]] = true; // Mark this element as seen
            }
        }
    }

    // Print the output
    if (found) {
        printf("The repeated element is: %d\n", repeated_element);
    } else {
        printf("No repeated element was found.\n");
    }

    return 0;
}
