#include <stdio.h>
void swap(int* x,int* y){
   int temp = *x;
   *x = *y;
   *y = temp;
}

void main(){
   int a , b;
   scanf("%d" , &a);
   scanf("%d" , &b);
   swap(&a, &b);
   printf("a is %d\n", a);
   printf("b is %d",b);
}

