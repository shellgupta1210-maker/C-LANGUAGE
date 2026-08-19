#include <stdio.h>

int main()
{
    int N, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &N);

    original = N;

    while (N != 0)
    {
        digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }

    if (reverse == original)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}
