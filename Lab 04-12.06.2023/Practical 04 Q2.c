#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;
    char op;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&no1,&no2);
    printf("Enter an Operator: ");
    scanf(" %c",&op);

    switch(op)
    {
        case '+':printf("Addition = %d\n",no1+no2);break;
        case '-':printf("Subtraction = %d\n",no1-no2);break;
        case '*':printf("Multiplication = %d\n",no1*no2);break;
        case '/':printf("Division = %d\n",no1/no2);break;
        default:printf("Invalid Operator");


    }

    return 0;
}
