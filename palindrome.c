 #include <stdio.h>

int main()
{
    int n, temp, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (rev == temp)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}

