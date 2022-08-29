#include <stdio.h>
int main(){
   int a,b,c,d;
   int arr1[a][b];
   int arr2[c][d];

   printf("enter the dimensions of 1st matrix: ");
   scanf("%d%d",&a,&b);
   
   printf("enter 1st matrix: ");
   for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
         scanf("%d",&arr1[i][j]);
      }
   }

   printf("enter the dimensions of 2nd matrix: ");
   scanf("%d%d",&c,&d);

   printf("enter 2nd matrix: ");
   for(int k=0;k<c;k++){
      for(int l=0;l<d;l++){
         scanf("%d",&arr2[k][l]);
      }
   } 
   
   if(b==c){
      int ans_matrix[a][d];
      
      printf("multiplication of matrix is :\n");
         for(int p=0;p<a;p++){
            for(int q=0;q<d;q++){ 
               for(int i=0;i<d;i++){
                  for(int j=0;j<a;j++){
                     for(int k=0;k<c;k++){
                        for(int l=0;l<b;l++){
                           ans_matrix[p][q]= (arr1[i][j])*(arr2[l][k]);
                        }
                     }
                  }
               }
            }
         }
      }else{
      printf("multiplication not possible\n");
   }

return 0;
}