#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1, mark,max=0,min=100,total=0;
    float avg;
    do
    {
    printf("Enter %d number: ",count);
    scanf("%d",&mark);
    if(mark>max)
    max=mark;
    if(mark<min)
    min=mark;
    total=total+mark;
    count++;
    } while(count<=10);
    avg=(float)total/10;
    printf("Maximum Mark is: %d\n",max);
    printf("Minimum mark is: %d\n",min);
    printf("Average mark:%. 2f\n",avg);

}
