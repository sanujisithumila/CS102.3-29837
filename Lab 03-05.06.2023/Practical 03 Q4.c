#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,D,C,A,PI; //PI=3.14159
    printf("Enter the Radius: ");
    scanf("%f",&r);
    D=2*r;
    PI=3.1459;
    C=2*PI*r;
    A=PI*r*r;

    printf("Diameter is %.2f\n",D);
    printf("Circumference is %.2f\n",C);
    printf("Area is %.2f\n",A);
    printf("\n");


    return 0;
}
