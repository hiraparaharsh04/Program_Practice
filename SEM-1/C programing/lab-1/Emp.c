#include <stdio.h>

int gross(int b)
{
    float da, hra, con, med, other;
    float gross;

    da = b * 0.10;
    hra = b * 0.08;
    con = b * 0.05;
    med = b * 0.10;
    other = b * 0.05;

    gross = da + hra + con + med + other;
    return gross;
}

void empdetail(char emp_name[10], char emp_id[10], char emp_role[10], double basic, float gross_salary)
{
    printf("Emp name %s\n", emp_name);
    printf("Emp id %s\n", emp_id);
    printf("Emp emp role %s\n", emp_role);
    printf("Emp basic salary %.2lf\n", basic);
    printf("Emp gross %.2f\n", basic);
}

int main()
{
    char emp_name[10], emp_id[10], emp_role[10];
    double basic;
    float gross_salary;

    printf("enter emp_name:\n");
    scanf("%s", &emp_name);
    printf("enter emp_id:\n");
    scanf("%s", &emp_id);
    printf("enter emp_role:\n");
    scanf("%s", &emp_role);
    printf("enter basic salary:");
    scanf("%lf", &basic);

    gross_salary = gross(basic);

    empdetail(emp_name, emp_id, emp_role, basic, gross_salary);
    return 0;
}