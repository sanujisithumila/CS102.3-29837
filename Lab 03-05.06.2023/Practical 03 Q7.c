#include <stdio.h>
#include <stdlib.h>

int main()
{
    char city;
    float b_salary,s_years,m_sales,a_allowance,bonus,g_remuneration;
    printf("Enter the Basic Salary: ");
    scanf("%f",&b_salary);
    printf("Enter Service Years: ");
    scanf("%f",&s_years);
    printf("Enter the City: ");
    scanf(" %c",&city);
    printf("Enter Monthly Sales: ");
    scanf("%f",&m_sales);

    if (m_sales<25000)
        bonus=m_sales*0.10;
    else if (25000<=m_sales<50000)
        bonus=m_sales*0.12;
    else
        bonus=m_sales*0.15;

    switch(city)
    {
        case'c':a_allowance=2500;break;
        default:a_allowance=0;

    }

     if (s_years>5)
        a_allowance=b_salary*0.10;


    g_remuneration=b_salary+a_allowance+bonus;

    printf("Gross Remuneration: %.2f",g_remuneration);



    printf("");
    return 0;
}
