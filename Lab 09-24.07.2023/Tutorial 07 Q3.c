#include <stdio.h>
#include <stdlib.h>

int Q03(int x,int y)
{
  int product = y*x;
  return product;
}
int main()
{
    int x,y;
    printf("Enter two whole numbers :");
    scanf("%d %d",&x , &y);
    printf("Product is %d\n",Q03(x,y) );
}


