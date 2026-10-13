#include <stdio.h>
#include <math.h>

void large(int *x, int *y) {
    if (*x < *y)
       *x = pow(*x, 2);
    else
       *y = pow(*y, 3);
}
int main() {
    int a = 5;
    int b = 3;

large(&a, &b);
printf("After making large: a = %d, b = %d\n", a, b);

    return 0;
}
