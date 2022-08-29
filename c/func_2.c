#include <stdio.h>
void add(int,int);

void main(){
   int a = 50, b = 30 ;
   add(a,b);
}

void add(int x , int y){
   int s = x + y;
   printf("%d",s);
}

