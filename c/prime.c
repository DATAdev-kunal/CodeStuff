#include <stdio.h>
int main(){
   int n, i,count = 0;
   printf("Enter your Number");
   scanf("%d",&n);
   for(i= 2; i*i <= n; i++ ){
      if(n%i == 0){
         count++;
      }
   }
   if(count != 0){
      printf("Not Prime");
   }
   else{
      printf("Prime");
   }
}