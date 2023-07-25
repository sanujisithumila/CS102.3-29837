#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1,no,p=0,n=0,z=0;
    while(count<=10)
    {
    printf("Enter %d number: ",count);
    scanf("%d",&no);
    if(no>0)
    p=p+1;
    else if (no<0)
    n=n=1;
    else
    z=z+1;
    count++;
    }
    printf("positive numbers: %d \n",p);
    printf("negative numbers: %d \n",n);
    printf("zeros: %d \n",z);

}
