#include <stdio.h>
int main() {
    int a ,b;
    printf("Enter length of rectangle: ");
    scanf("%d", &a);
    printf("Enter width of rectangle: ");
    scanf("%d", &b);
    int area = a * b;
    printf("Area of rectangle is %d", area);
    int perimeter = 2 * (a + b);
    printf("\nPerimeter of rectangle is %d", perimeter);
    return 0;
   }