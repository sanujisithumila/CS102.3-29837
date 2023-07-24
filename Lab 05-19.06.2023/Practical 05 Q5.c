#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,reverse=0,mod;
    printf("Enter a number: ");
    scanf("%d",&no);
    do
    {
    mod=no%10;
    reverse=reverse*10+mod;
    no=no/10;
    }while(no!=0);
    printf(" %d",reverse);
}
