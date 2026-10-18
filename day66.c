#include <stdio.h>
#include <stdlib.h>

// Structure to keep track of the original index after sorting
typedef struct {
    int value;
    int index;
} Element;

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return ((Element*)a)->value - ((Element*)b)->value;
}

int main() {
    int n, target;

    // Read the number of elements in the array
    if (scanf("%d", &n) != 1) return 0;

    Element *nums = (Element*)malloc(n * sizeof(Element));
    
    // Read the array elements and store their original indices
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i].value);
        nums[i].index = i;
    }

    // Read the target sum
    if (scanf("%d", &target) != 1) {
        free(nums);
        return 0;
    }

    // Sort the array based on values
    qsort(nums, n, sizeof(Element), compare);

    // Two-pointer approach to find the pair
    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left < right) {
        int current_sum = nums[left].value + nums[right].value;

        if (current_sum == target) {
            printf("%d %d\n", nums[left].index, nums[right].index);
            found = 1;
            break;
        } else if (current_sum < target) {
            left++; // Need a larger sum
        } else {
            right--; // Need a smaller sum
        }
    }

    // If no solution is found
    if (!found) {
        printf("-1 -1\n");
    }

    free(nums);
    return 0;
}
