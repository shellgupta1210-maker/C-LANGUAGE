#include <stdio.h>

int main() {
    int num = 42;

    int *ptr;

    ptr = &num;

    printf("The value of pointer: %p\n", ptr);
    printf("The value pointing to: %d\n", *ptr);

    return 0;
}
