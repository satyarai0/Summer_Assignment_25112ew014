#include <stdio.h>

int main()
{
    int n, product = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        int digit = n % 10;
        product = product * digit;
        n = n / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}