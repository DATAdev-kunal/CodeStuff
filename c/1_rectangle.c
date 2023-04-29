#include <stdio.h>

int main()
{
    float l;    // 'l' is length of rectangle
    float b;    // 'b' is breadth of rectangle
    
        printf("Enter the length of rectangle: ");
        scanf("%f", &l);
        
        printf("Enter the breadth of rectangle: ");
        scanf("%f", &b);
        
    printf("The area of rectangle is: %.2f sq.units", l*b);
    

    return 0;
}