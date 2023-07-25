#include <stdio.h>
#include <stdlib.h>


float Q04(float x, float y)
{
    float quotient = x/y;
    return quotient;
}
float main()
{
    float x,y;
    printf("Enter two whole numbers : ");
    scanf("%d %d",&x,&y);
    printf("Quotient is %.2f",Q04(x,y));
}



/*
#include <stdio.h>
int Q04(int x, int y)
{
    int quotient = x/y;
    return quotient;
}
int main()
{
    float x,y;
    printf("Enter two whole numbers : ");
    scanf("%d %d",&x,&y);
    printf("Quotient is %d",Q04(x,y));
}*/


