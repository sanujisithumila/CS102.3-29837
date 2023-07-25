#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no[10],count=1,e=0;
    do
    {
    printf("Enter %d number: ",count);
    scanf("%d",&no[count-1]);
    count++;
    }while(count<=10);
    for(count=0;count<10;count++)
    {
    if(no[count]%2==0)
    e++;
    }
    printf("The even numbers are %d\n",e);

}
