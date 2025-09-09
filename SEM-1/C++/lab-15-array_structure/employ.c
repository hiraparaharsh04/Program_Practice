#include <stdio.h>

struct emp
{
    char name[10];
    int sal;
    int id;
};

int main()
{
    int length;

    printf("enter length:");
    scanf("%d", &length);

    struct emp e[length];

    for (int i = 0; i < length; i++)
    {
        printf("Enter Id = ");
        scanf("%d", &e[i].id);
        printf("Enter Name = ");
        scanf("%s", &e[i].name);
        printf("Enter salary = ");
        scanf("%d", &e[i].sal);
    }
    printf("\nid\t name\t\t sal");
    for (int i = 0; i < length; i++)
    {
        printf("\n%d\t %s\t  %d", e[i].id, e[i].name, e[i].sal);
    }

    return 0;
}