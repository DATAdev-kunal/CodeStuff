#include <stdio.h>
int main(){
   int n,count;
   printf("Enter the limit");
   scanf("%d",&n);
   printf("Prime list\n");
   for(int i = 2; i <= n; i++){
      count = 0;
      for(int j = 2; j *j <= i; j++){
         if(i%j == 0){
            count++;
         }
      }  
      if(count == 0){
         printf("%d\n",i);
      } 
   }
   return 0;
}