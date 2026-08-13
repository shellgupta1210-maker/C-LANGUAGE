#include<stdio.h>
     int main() {
        int a, b;
        printf("Enter the value of a and b: ");
        scanf("%d %d", &a, &b);
        swap(a, b);
        printf("After swapping: a = %d, b = %d\n", a, b);
        return 0;
    }
    int swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        printf("After swapping: a = %d, b = %d\n", a, b);
        return 0; 
    }