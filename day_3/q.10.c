#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter starting and ending range: ");
    scanf("%d %d", &start, &end);

    for(int n = start; n <= end; n++)
    {
        int count = 0;

        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", n);
        }
    }

    return 0;
}