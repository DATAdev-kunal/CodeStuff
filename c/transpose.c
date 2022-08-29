#include <stdio.h>
int main()
{
 int arr[3][3];
 for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 3; j++)
    {
        printf("enter element of %d row & %d column\n",(i+1),(j+1));
        scanf("%d",&arr[i][j]);
    }
    
 }
 
 for (int  k = 0; k < 3; k++)
 {
     for (int l = 0; l < 3; l++)
     {
         printf("%d  ",arr[l][k]);
     }
     printf("\n");
     
 }
 
    return 0;
}