#include <stdio.h>
int main(){
   int n;
   printf("Enter the limit");
   scanf("%d",&n);
   printf("Even list\n");
   for(int i = 2; i <= n; i++){
      if(i%2 == 0){
         printf("%d\n",i);
      }
   }

   printf("Odd list\n");
   for(int i = 2; i <= n; i++){
      if(i%2 != 0){
         printf("%d\n",i);
      }
   }


   return 0;
}