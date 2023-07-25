#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,price,total=0,item_p=0;
    float avg;
    for(count=1;count<=10;count++)
    {
    printf("Enter %d item price: ",count);
    scanf("%d",&price);
    if(price>=200)
    {
    item_p =item_p + 1;
    }
    total=total+price;
    }
    avg=(float)total / 10;
    printf("Average value of an item: %.2f \n",avg);
    printf("%d prices are greater than 200.\n",item_p);

}
