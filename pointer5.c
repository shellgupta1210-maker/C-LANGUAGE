#include <stdio.h>

void rotate(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}
int main() {
    int a = 10;
    int b = 20;
    int c = 30;

rotate(&a, &b, &c);
printf("After rotation: a = %d, b = %d, c = %d\n", a, b, c);

   
    return 0;
}
