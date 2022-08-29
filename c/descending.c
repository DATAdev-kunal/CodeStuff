#include <stdio.h>
int main()
{
    int arr[10], n, min;

    printf("enter the no. of elements: \n");
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
            if (arr[j] >t arr[t])
            {
                min = arr[j];
                arr[j] = arr[t];
                arr[t] = min;
            }

            else
                continue;
        }
    }
    printf("Descending order is:\n");
    for (int z =n-1; z >=0; z--)
    { 
        printf("%d  ", arr[z]);
    }

    return 0;
}