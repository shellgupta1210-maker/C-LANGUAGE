/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1
*/

#include <stdio.h>

// Boyer-Moore Voting Algorithm with verification
int findMajorityElement(int nums[], int n) {
    if (n <= 0) return -1;

    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verification step
    int occurrences = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            occurrences++;
        }
    }

    if (occurrences > n / 2) {
        return candidate;
    }
    return -1;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = findMajorityElement(nums, n);
    printf("%d\n", majority);

    return 0;
}
