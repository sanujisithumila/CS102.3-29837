#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1, mark,total=0;
    float avg;
    do
    {
    printf("Enter %d mark: ",count);
    scanf("%d",&mark);
    total=total+mark;
    count++;
    } while(count<=10);
    avg=(float)total/10;
    printf("Total is %d\n",total);
    printf("Average is %.2f",avg);
    if(avg<50)
    {
    printf("\nFail!");
    }
    else
    {
    printf("\nPass!");
    }

}
