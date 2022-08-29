#include <stdio.h>

int  main() {
   int i;
   int x;
   printf("enter element no. : ");
   scanf("%d",&x);
   int a = 0;
   int b = 1;
   printf("%d\n", a);
   printf("%d\n", b);
   int c = 0;
   for(i = 2; i <= x; i++){
      c = a+b;
      printf("%d\n",c);
      a = b;
      b = c;
      
   }

   return 0;
}
