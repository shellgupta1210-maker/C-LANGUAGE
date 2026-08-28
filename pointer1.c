#include <stdio.h>

int main() {
    int a = 42;

    int *ptr;

    ptr = &a;

    printf("Value of the variable (direct): %d\n", a);

    printf("Value of the variable (via pointer): %d\n", *ptr);

    return 0;
}
