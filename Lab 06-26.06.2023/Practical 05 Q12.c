#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,count=1;
    printf("Enter a number: ");
    scanf("%d",&no);
    printf("Factors of %d\n",no);
    while(count<=no)
    {
    if(no%count==0)
    printf("%d\n",count);
    count++;
    }
}
