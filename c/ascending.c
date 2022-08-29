#include <stdio.h>
int main()
{
    int arr[10], n, max;

    printf("enter no. of elements of an array\n");
    scanf("%d", &n);
    printf("enter elements of array\n");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        for (int t = j + 1; t <= n; t++)
        {
            if (arr[j] > arr[t])
            {
                max = arr[j];
                arr[j] = arr[t];
                arr[t] = max;
            }

            else
                continue;
        }
    }
    printf("Ascending order is:\n");
    for (int z = 0; z < n; z++)
    {
        printf("%d  ", arr[z]);
    }

    return 0;
}