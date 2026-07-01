#include <stdio.h>

int main()
{
    int arr[100], n, i, pos, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &element);

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}