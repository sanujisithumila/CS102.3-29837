#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,sum=0;
    do
    {
    printf("Enter number series (to terminate enter -1): ");
    scanf("%d",&no);
    sum=sum+no;
    }while(no!= -1);
    sum=sum+1;
    printf("Sum is %d\n",sum);

}
