#include <stdio.h>
int fibo(int i);
int  main() {
   int i;
   int x;
   printf("enter element no. : ");
   scanf("%d",&x);
   for (i = 1; i <= x; i++) {
      printf("%d\t\n", fibo(i));
   }
   return 0;
}
int fibo(int i){
   if(i==0) {
      return 1;
   }
   if(i==1){
       return 1;
   }
   return fibo(i-1) + fibo(i-2);
}