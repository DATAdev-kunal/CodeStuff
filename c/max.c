#include <stdio.h>
int main()
{
    int arr[10], max;
    for (int i = 0; i < 10; i++)
    {

        printf("Enter the %d element of array:\n", (i + 1));
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int j = 1; j < 10; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
        else
            continue;
    }
    printf("Largest no. is: %d", max);
    return 0;
}