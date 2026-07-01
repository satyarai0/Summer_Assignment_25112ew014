#include <stdio.h>

int main()
{
    int n, original, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(original == rev)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }

    return 0;
}