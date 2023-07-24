#include <stdio.h>
#include <stdlib.h>

int main()
{
    //while loop
    int x=0;
    while(x <=100)
    {
    printf("%d ",x++);
    }
    printf("\n\n");


    //do-while loop
    int y=0;
    do
    {
    printf("%d ",y++);
    }while(y<=100);
    printf("\n\n");



    //for loop
    int z=0;
    for(z=0 ; z<=100 ; z++)
    {
    printf("%d ",z);
    }
    printf("\n\n");
}
