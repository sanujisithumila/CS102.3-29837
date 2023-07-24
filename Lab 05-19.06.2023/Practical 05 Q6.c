#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,power,base,result=1;
    printf("Enter the base value :");
    scanf("%d",&base);
    printf("Enter the power value :");
    scanf("%d",&power);
    for(count=1;count<=power;count++)
    {
    result=result*base;
    }
    printf("value is %d",result);

}
