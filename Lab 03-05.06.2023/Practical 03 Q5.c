#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;
    printf("Enter Two Integers: ");
    scanf("%d %d",&no1,&no2);
    if (no2!=0 && no1%no2==0)
        printf("%d is a multiple of %d\n",no1,no2);
    else
        printf("%d is not a multiple of %d\n",no1,no2);
    printf("\n");
    return 0;
}
