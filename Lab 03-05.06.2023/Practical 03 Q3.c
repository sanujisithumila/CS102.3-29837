#include <stdio.h>
#include <stdlib.h>

int main()
{
    float BS,NS,IN;
    char name[20];
    printf("Enter Employee Name: ");
    scanf("%s",&name);
    printf("Enter Basic Salary: ");
    scanf("%f",&BS);

    if (BS>=10000)
        IN=BS*0.15;
    else if (5000<=BS<10000)
        IN=BS*0.10;
    else
        IN=BS*0.05;
    NS=BS+IN;

    printf("%s's New Salary is %.2f\n",name,NS);



    return 0;
}
