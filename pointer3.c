#include <stdio.h>

int main() {
    int num = 42;

    int *ptr;

    ptr = &num;

    printf("The value of pointer: %p\n",ptr);

    return 0;
}
