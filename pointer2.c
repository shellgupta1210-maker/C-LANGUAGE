#include <stdio.h>

int main() {
    int num = 42;

    int *ptr;

    ptr = &num;

    printf("Address using the address-of operator (&num): %p\n", &num);
    printf("Address using the pointer variable (ptr):    %p\n", ptr);

    return 0; 
}
