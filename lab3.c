#include <stdio.h>

int is_even(int num);

int main() {
    int test_number;

    printf("Enter an integer: ");
    scanf("%d", &test_number);

    if (is_even(test_number) == 1) {
        printf("%d is even.\n", test_number);
    } else {
        printf("%d is odd.\n", test_number);
    }

    return 0;
}

int is_even(int num) {
    if (num % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
