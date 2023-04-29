#include <stdio.h>

int main()
{
    float r,area,h;
    float pi=3.14;
    
    printf("\n\nenter the radius & height: ");
    scanf("%f%f", &r,&h);

    area=pi*r*r;
    printf("the area of circle is: %.2f\n", area);

    printf("volume of cylinder is: %.2f\n\n\n", area*h);

    return 0;
}
