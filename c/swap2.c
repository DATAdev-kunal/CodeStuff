#include <stdio.h>
void swap(int ,int);

void main(){
   int a = 50, b = 30;
   swap(a, b);
   
}

void swap(int x , int y){
   int temp = x;
   x = y;
   y = temp;
   printf("a is %d\n",x);
   printf("b is %d",y);
}

