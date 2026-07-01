#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(int n = start; n <= end; n++)
    {
        int temp = n;
        int sum = 0;

        while(temp != 0)
        {
            int digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}