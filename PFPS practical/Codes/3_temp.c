#include <stdio.h>

int main()
{
    float celc;    //temp in celcius
    float fahr;    //temp in fahrenheit

    printf("Enter celcius temp: ");
    scanf("%f", &celc);

    fahr= (celc*1.8)+32;

    printf("Temperature in fahrenheit is: %.2f\n", fahr);
    return 0;
}
