#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;

int main() {
    complex n1, n2,sum,diff, multi, div;


    printf("Enter the real and imaginary parts of 1st no. : ");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nEnter the real and imaginary parts of 2nd no. : ");
    scanf("%f %f", &n2.real, &n2.imag);

    sum.real= n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;

    diff.real= n1.real - n2.real;
    diff.imag = n1.imag - n2.imag;

    multi.real= (n1.real *n2.real) - (n1.imag*n2.imag);
    multi.imag = (n1.real* n2.imag) + (n1.imag *n2.real);

    div.real= (n1.real *n2.real + n1.imag*n2.imag)/((n2.real)*(n2.real)+ (n2.imag)*(n2.imag)); 
    div.imag = ((n1.real* n2.imag) - (n1.imag *n2.real))/((n2.real)*(n2.real)+ (n2.imag)*(n2.imag));

    printf("Sum = %.1f + (%.1f)i\n", sum.real, sum.imag);
    printf("Difference = %.1f + (%.1f)i\n", diff.real, diff.imag);
    printf("Multiplication= %.1f + (%.1f)i\n", multi.real, multi.imag);
    printf("Division = %.1f + (%.1f)i", div.real, div.imag);
     return 0;
}


