#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,mod,total=0,x;
    printf("Enter the number: ");
    scanf("%d",&no);
    x=no;
    while(no)
    {
    mod=no%10;
    total=total+(mod*mod*mod);
    no=no/10;
    }
    printf("%d",no);
    if(x==total)
    printf("%d is a armstrong number",x);
    else
    printf("%d is not a armstrong number",x);

}
