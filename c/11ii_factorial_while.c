#include <stdio.h>
int main(){
    int i=1;
    int fact=1;

    printf("Enter the no. : ");
    scanf("%d",&i);

    while (i>=1)
    {
        fact *= i;
        i--;
    }
    printf("The factorial of given no. is : %d\n", fact);
    return 0;
}
