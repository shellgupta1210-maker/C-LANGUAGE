#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    
    int *p = &number;
    int *q = &sum;

    printf("Enter a number: ");
    scanf("%d", p); 
    
    while (*p > 0) {
        digit = *p % 10;   
        printf("%d ", digit); 
        *q += digit;       
        *p /= 10;          
    }

    printf("\nSum of digits: %d\n", *q);

    return 0;
}
