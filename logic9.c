/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr = [100, 200, 300, 400], k = 2
Output 1:
700

Input 2:
arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output 2:
39

Input 3:
arr = [100, 200, 300, 400], k = 1
Output 3:
400
*/

#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size\n");
        return 0;
    }

    // Compute sum of first window
    long long currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    long long maxSum = currentSum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%lld\n", maxSum);

    return 0;
}
