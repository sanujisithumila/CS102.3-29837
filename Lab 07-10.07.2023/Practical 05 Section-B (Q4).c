#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,emp_no,emp=0;
    float b_salary;
    printf("To stop printing enter -999 \n");
    do
    {
    printf("\n");
    printf("Employee no: ");
    scanf("%d”,&emp_no);
    if (emp_no== -999)
    break;
    printf("Basic salary: ");
    scanf("%f”,&b_salary);
    if(b_salary>=5000)
    emp++;
    count++;
    } while (1);
    printf("\n");
    printf("%d employees salary is >=5000",emp);

}
