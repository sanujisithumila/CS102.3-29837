#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,emp_no,w_hours,ot_rate,emp=0;
    float ot,p_emp;
    printf("To stop printing enter -999 \n");
    do
    {
    printf("\n");
    printf("Employee no :");
    scanf("%d",&emp_no);
    if(emp_no== -999)
    break;
    printf("Work hours :");
    scanf("%d",&w_hours);
    if(w_hours>=40)
    {
    ot_rate = 200;
    }
    else
    {
    ot_rate = 150;
    }
    ot=w_hours* ot_rate;
    if(ot>=4000)
    emp++;
    count++;
    }while(1);
    p_emp= (float)(emp*100)/count;
    printf("\n");
    printf("The percentage of employees whose OT payment exceeding the Rs. 4000/- : %.2f %% ",p_emp);

}
