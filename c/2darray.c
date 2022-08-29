#include <stdio.h>
int main()
{
 int arr[3][3];
 printf("enter the elements: ");
 for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
 }
 
 for (int  k = 0; k < 3; k++)
 {
     for (int l = 0; l < 3; l++)
     {
         printf("%d  ",arr[k][l]);
     }
     printf("\n");
     
 }
 
    return 0;
}