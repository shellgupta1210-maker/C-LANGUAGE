/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1
*/

#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    long long total = (long long)n * (n + 1) / 2;
    long long x = (long long)sqrt(total);

    if (x * x == total) {
        return (int)x;
    }
    return -1;
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int pivot = findPivotInteger(n);
    printf("%d\n", pivot);

    return 0;
}
