#include <stdio.h>

int main()
{
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    if ( n%2==0 || n%3==0 || n%5==0 || n%7==0)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }
    
    return 0;
}