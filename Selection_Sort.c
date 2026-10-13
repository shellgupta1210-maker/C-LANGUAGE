#include <stdio.h>

int main() {
    int n, i, j, temp, compare;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        compare = i; 
        for(j = i + 1; j < n; j++) {  
            if(arr[j] < arr[compare]) {
                compare = j; 
            }
        }
        temp = arr[compare];
        arr[compare] = arr[i];
        arr[i] = temp;
    } 
    printf("\nFinal sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
