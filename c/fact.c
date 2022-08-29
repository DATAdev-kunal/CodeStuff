#include <stdio.h>
int main(){
    int x;     // number 
    int f=1;   // factorial

    printf("enter the no. : ");
    scanf("%d", &x);

    for(int i=1; i<=x; i++){
        f*= i;
    }
    printf("the factorial of no. is : %d\n", f);
    
    return 0;
}