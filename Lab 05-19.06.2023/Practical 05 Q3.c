#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,count,fact=1;
    printf("Enter a number: ");
    scanf("%d",&no);
    for(count=1; count<=no;count++)
    {
    fact=fact*count;
    }
    printf("Factorial of %d is %d",no,fact);
}
