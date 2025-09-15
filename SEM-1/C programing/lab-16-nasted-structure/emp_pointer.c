#include <stdio.h>
#include <stdlib.h>


struct employee
{
    int e_id;
    char name[10];
    int salary;
};

int main()
{
    int length;
    printf("enter length:");
    scanf("%d", &length);

    struct employee *ptr;

    ptr=(struct employee * )malloc(length*sizeof(struct employee));

    for (int i = 0; i < length; i++)
    {
        printf("Enter employee Id:");
        scanf("%d", &(ptr+i)->e_id);

        printf("Enter employee name:");
        scanf("%s", &(ptr+i)->name);

        printf("Enter salary:");
        scanf("%d", &(ptr+i)->salary);

        printf(" %d\n %s\n %d\n", (ptr+i)->e_id, (ptr+i)->name, (ptr+i)->salary);
    }

    return 0;
}
