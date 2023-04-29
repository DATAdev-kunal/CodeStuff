#include <stdio.h>

int main(){

    int n;            //  n is years
    float p,r,si;     /* p is princple amount
                         r is rate on interest 
                         si is simple interest */

    printf("Enter amount: ");  scanf("%f", &p);
    printf("Enter years: "); scanf("%d", &n);
    printf("Enter rate of interest: "); scanf("%f",&r);

    si= p*n*r/100;

    printf("simple interest is: %.2f", si);

    return 0;
}