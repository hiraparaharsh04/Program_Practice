#include <stdio.h>
#include <stdlib.h>

// struct s1
// {
//     int roll;
//     char name[10];

// }e;
union u1
{
    int roll_no;
    char name[10];
} u;

int main()
{
    // printf("struct size:%d\n",sizeof(e));
    // printf("union size:%d",sizeof(u));

    printf("Enter roll no= ");
    scanf("%d", &u.roll_no);
    printf("Enter Name = ");
    scanf("%s", &u.name);

    printf("---------------------------\n");

    printf(" %d\n %s", u.roll_no, u.name);

    return 0;
}
