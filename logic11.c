/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr = [12, 1, 3, 5], k = 3
Output 3:
0 0
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

    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNegative = arr[i + j];
                break;
            }
        }

        if (i == 0) {
            printf("%d", firstNegative);
        } else {
            printf(" %d", firstNegative);
        }
    }
    printf("\n");

    return 0;
}
