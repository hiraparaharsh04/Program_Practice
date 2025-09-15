#include <stdio.h>

struct address
{
    char city[10];
    int house_no;
};

struct employee
{
    int e_id;
    char name[10];
    struct address add;
};

int main()
{
    struct employee e1;

    printf("Enter employee Id:");
    scanf("%d", &e1.e_id);

    printf("Enter employee name:");
    scanf("%s", &e1.name);

    printf("Enter city:");
    scanf("%s", &e1.add.city);

    printf("Enter houes number:");
    scanf("%s", &e1.add.city);

    printf(" id = %d\n name = %s\n city = %s\n house_no = %s",e1.e_id,e1.name,e1.add.city,e1.add.city);

    return 0;
}
