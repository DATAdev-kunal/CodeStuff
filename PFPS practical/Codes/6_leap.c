#include <stdio.h>
int main(){
    int y;
    int i;
    printf("Enter the year: ");
    scanf("%d", &y);

    if(y%4 !=0 || (y/100)%4 !=0){
        printf("Its not a leap year\n");
    } else {
        printf("Its a leap year\n");
    }
    return 0;
    }

