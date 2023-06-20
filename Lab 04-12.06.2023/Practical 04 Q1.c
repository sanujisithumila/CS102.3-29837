#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,ans;
    printf("Enter an Integer: ");
    scanf("%d",&no);

    ans=no%2;
    if (ans==1)
        printf("%d is an Odd Number\n",no);
    else
        printf("%d is an Even Number\n",no);
    printf("\n\n");



    //Using Switch Statement
    int num;
    printf("Enter an Integer: ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0:printf("Even Number");break;
        case 1:printf("Odd Number");break;
        default:printf("Invalid Input");

    }

    return 0;
}
