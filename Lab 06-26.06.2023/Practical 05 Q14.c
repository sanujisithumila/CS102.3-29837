#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no[10],count=1;
    do
    {
    printf("Enter %d number: ",count);
    scanf("%d",&no[10]);
    count++;
    }while(count<=10);
    for(count=1;count<10;count++)
    printf("The %d is %d\n",count,no[10]);

}
