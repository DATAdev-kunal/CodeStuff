#include <stdio.h>

int main(){
    printf("The table of 10 in reverse order is :\n");

    for(int i=10; i>=1; i--){
        int t;
        t= i*10;
        printf("%d\n", t);
    }
return 0;
}