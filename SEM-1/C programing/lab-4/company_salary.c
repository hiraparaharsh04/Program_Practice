#include <stdio.h>

void emp(int salary, int level)
{
    int gross_salary, net_salary;
    float incom_texe;
    int perks;

    if (salary >= 6000 && level == 1)
    {
        perks = 1500;
    }
    else if (salary >= 4000 && level == 2)
    {
        perks = 950;
    }
    else if (salary >= 2000 && level == 3)
    {
        perks = 600;
    }
    else if (salary >= 1000 && level == 4)
    {
        perks = 250;
    }
    else
    {
        printf("your salary not match ");
    }

    gross_salary = salary + (salary * 0.1) + perks;

    if (gross_salary <= 2000)
    {
        incom_texe = 0;
    }
    else if (gross_salary > 2000 && gross_salary <= 4000)
    {
        incom_texe = 3;
    }
    else if (gross_salary > 4000 && gross_salary <= 5000)
    {
        incom_texe = 5;
    }
    else if (gross_salary > 5000)
    {
        incom_texe = 8;
    }

    float tex = (gross_salary * incom_texe) / 100;
    net_salary = gross_salary - tex;
    
    printf("net salary is: %d", net_salary);
}

int main()
{

    int jobno, level, salary;

    printf("Enter job no:");
    scanf("%d", &jobno);
    printf("Enter level:");
    scanf("%d", &level);
    printf("Enter salary:");
    scanf("%d", &salary);

    emp(salary, level);
    return 0;
}