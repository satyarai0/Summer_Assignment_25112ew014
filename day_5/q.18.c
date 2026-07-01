#include <stdio.h>

int main()
{
    int n, temp, rem, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact = fact * i;

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}