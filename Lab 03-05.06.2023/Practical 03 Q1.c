#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,no3,max,min;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&no1,&no2,&no3);

    //Largest Number
    max=no1;
    if (no2>max)
        max=no2;
    else
        max=no3;

    printf("The Largest Value is %d\n",max);

    //Smallest Number
    min=no1;
    if (no2<min)
        min=no2;
    else
        min=no3;

    printf("The Smallest Value is %d\n",min);



    return 0;
}
