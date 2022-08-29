#include <stdio.h>
int main(){
   int arr[3][3];
   printf("enter the elements :");

   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         scanf("%d",&arr[i][j]);
      }
   }
   printf("matrix is :\n");

   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         printf("%d ",arr[i][j]);
      }
      printf("\n");
   }

   printf("transpose matrix is :\n");

   for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
         printf("%d ",arr[j][i]);
         }
         printf("\n");
      }


}