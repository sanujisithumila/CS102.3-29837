#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,no,count;
    printf("Enter the number of terms:");
    scanf("%d",&no);
    printf("Enter the first & second number:");
    scanf("%d %d",&n1,&n2);
    for(count=1;count<=no;count++)
    {
    printf("%d ",n1);
    n3=n1+n2;
    n1=n2;
    n2=n3;
    }

}
