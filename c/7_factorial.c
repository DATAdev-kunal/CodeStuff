#include <stdio.h>

int main()
{
    int i;
    int k;
    int factorial_i =1;
    
    printf("Enter the number: ");
    scanf("%d", &i);
    
    for(k=1;k<=i;k++){
        
       factorial_i *= k;
    }
       printf("Factorial of entered no. is: %d\n", factorial_i);
    
   return 0;
}
