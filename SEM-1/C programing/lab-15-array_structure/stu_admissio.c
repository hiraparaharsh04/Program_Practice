#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[10];
    int maths;
    int physics;
    int chemistry;
};

int main()
{
    int length;
    printf("enter length:");
    scanf("%d", &length);

    struct student e[length];
    char eligible[length][1];

    for (int i = 0; i < length; i++)
    {
        printf("Enter roll no = ");
        scanf("%d", &e[i].rollno);
        printf("Enter Name = ");
        scanf("%s", &e[i].name);
        printf("Enter maths marks = ");
        scanf("%d", &e[i].maths);
        printf("Enter physics marks = ");
        scanf("%d", &e[i].physics);
        printf("Enter chemistry marks = ");
        scanf("%d", &e[i].chemistry);

        int total = e[i].maths + e[i].physics + e[i].chemistry;

        if (e[i].maths >= 50 && e[i].physics >= 50 && e[i].chemistry >= 50 && total >= 170)
        {
            strcpy(eligible[i], "Yes");
        }
        else if (e[i].maths + e[i].physics >= 120)
        {
            strcpy(eligible[i], "Yes");
        }
        else
        {
            strcpy(eligible[i], "No");
        }

        printf("\nroll no\t name\t maths\t physics chemistry eligible");

        for (int i = 0; i < length; i++)
        {
            printf("\n %d\t %s\t %d\t %d\t %d\t %s", e[i].rollno, e[i].name, e[i].maths, e[i].physics, e[i].chemistry, eligible[i]);
        }

        return 0;
    }
}