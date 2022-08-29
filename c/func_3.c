#include <stdio.h>
int add();

void main(){
   
   int s = add();
   printf("%d",s);
}

int add(){
   int a , b;
   scanf("%d",&a);
   scanf("%d",&b);
   return (a+b);
}

