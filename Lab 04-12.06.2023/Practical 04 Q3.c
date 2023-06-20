#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    float r,C,A,V,PI=3.14159;

    printf("Enter the Choice: ");
    scanf(" %c",&choice);
    printf("Enter the Radius: ");
    scanf("%f",&r);

    switch(choice)
    {
        case 'C':printf("Circumference of a Circle: %.2f\n",C=2*PI*r);break;
        case 'A':printf("Area of a Circle: %.2f\n",A=PI*r*r);break;
        case 'V':printf("Volume of a Sphere: %.2f\n",V=4*PI*r*r*r/3);break;
        default:printf("Invalid choice");

    }
    return 0;
}
