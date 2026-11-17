#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data item;

    item.i = 42;
    printf("Integer value: %d\n", item.i);

    item.f = 3.14;
    printf("Float value: %.2f\n", item.f);

    item.c = 'A';
    printf("Character value: %c\n", item.c);

    return 0;
}
