#include <stdio.h>
int main()
{
    int arr[10], min;
    printf("Enter 10 elements of array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    for (int j = 1; j < 10; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }
        else
            continue;
    }
    printf("Smallest no. is: %d", min);
    return 0;
}