#include <stdio.h>
int main(){
   int n,r,dig;
   int csum = 0;
   printf("enter the no. ");
   scanf("%d", &n);
   r=n;
   while(n > 0){
      dig = n%10;
      n = n /10;
      csum = csum + dig*dig*dig;
      printf("%d\n",csum);
   }

   if(csum == r){
      printf("Number is Armstrong");
   }
   else{
      printf("not Armstrong");
   }

   return 0;
}