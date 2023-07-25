#include <stdio.h>
#include <stdlib.h>


void Q02(int a, int b)
{
    int sum;
    int difference;
    sum=a+b;
    difference=a-b;
    printf("The total is %d\n",sum);
    printf("Difference is %d\n",difference);
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a ,&b);
    Q02(a,b);
}


