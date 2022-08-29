#include <stdio.h>

int main(){
    int i;

    printf("Enter the no. ");
    scanf("%d", &i);

    printf("The table for %d is:\n ", i);

    for(int k=1; k<=10; k++){
        int t;
        t= k*i;
        printf("%d\n", t);
    }
    return 0;
}