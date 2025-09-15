#include <stdio.h>

struct emp
{
    char name[10];
    int basic_sal;
    int id;
};

int main()
{
    int length;
    printf("enter length:");
    scanf("%d", &length);

    int hra[length], da[length], pf[length], net_sal[length];

    struct emp e[length];

    for (int i = 0; i < length; i++)
    {
        printf("Enter Id = ");
        scanf("%d", &e[i].id);
        printf("Enter Name = ");
        scanf("%s", &e[i].name);
        printf("Enter salary = ");
        scanf("%d", &e[i].basic_sal);

        hra[i] = e[i].basic_sal * 0.10;
        da[i] = e[i].basic_sal * 0.5;
        pf[i] = e[i].basic_sal * 0.12;
        net_sal[i] = e[i].basic_sal + hra[i] + da[i] - pf[i];
    }
    printf("\nid\t name\t salary\t hra\t da\t pf\t net salary");
    for (int i = 0; i < length; i++)
    {
        printf("\n %d\t %s\t %d\t %d\t %d\t %d\t %d\t", e[i].id, e[i].name, e[i].basic_sal, hra[i], da[i], pf[i], net_sal[i]);
    }

    return 0;
}