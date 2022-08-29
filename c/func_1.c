#include <stdio.h>
int add(int,int);

void main(){
   int a = 50, b = 30 , s;
   s = add(a,b);
   printf("%d",s);
}

int add(int x , int y){
   return (x+y);
}

