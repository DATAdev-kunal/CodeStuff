#include <stdio.h>
int main(){
   int a[10];
   int i; 
   float sum=0;
   printf("Enter the elements:");

   for(int i=0;i<=9;i++){
      scanf("%d", &a[i]);
      sum= sum+ a[i];
   }
      printf("Average of elements is: %.2f",sum/10);
   }
   