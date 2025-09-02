#include <stdio.h>

int gross(int b)
{
    float da, hra, pf;
    float gross;

    if (b < 50000)
    {
        da = b * 0.30;
    }
    else
    {
        da = b * 0.45;
    }

    hra = b * 0.15;
    pf = b * 0.12;

    gross = b + da + hra - pf;
    return gross;
}

void empdetail(char emp_name[10], double basic, float gross_salary)
{
    printf("Emp name %s\n", emp_name);
    printf("Emp basic salary %.2lf\n", basic);
    printf("Emp gross %.2f\n", basic);
}

int main()
{
    char emp_name[10];
    double basic;
    float gross_salary;

    printf("enter emp_name:\n");
    scanf("%s", &emp_name);
    printf("enter basic salary:");
    scanf("%lf", &basic);

    printf("-------------------- \n");

    gross_salary = gross(basic);

    empdetail(emp_name, gross_salary, basic);
    return 0;
}