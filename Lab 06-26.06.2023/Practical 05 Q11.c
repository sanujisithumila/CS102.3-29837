#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,count=2,prime=1;
    printf("Enter a number: ");
    scanf("%d",&no);
    while(count<no)
    {
    if(no%count==0)
    {
    prime=0;
    break;
    }
    count++;
    }
    if(prime)
    printf("%d is a prime number",no);
    else
    printf("%d is not a prime number",no);

}

