#include <stdio.h>

int main(){
    int i=0;
    printf("enter the no. : ");
    scanf("%d", &i);
    
    if(i%2 !=0){
        printf("entered no. is odd\n");

    } else{
        printf("entered no. is even\n");
    }
return 0;
}