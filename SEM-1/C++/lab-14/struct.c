#include <stdio.h>

struct student
{
    int rollno;
    char name[10];
    int total;
};

int main()
{
    struct student s1;
    struct student s2;

    printf("Enter roll no = ");
    scanf("%d", &s1.rollno);
    printf("Enter name = ");
    scanf("%s", &s1.name);
    printf("Enter total mark = ");
    scanf("%d", &s1.total);

    printf("Enter roll no = ");
    scanf("%d", &s2.rollno);
    printf("Enter name = ");
    scanf("%s", &s2.name);
    printf("Enter total mark = ");
    scanf("%d", &s2.total);

    printf("%d - %s - %d \n", s1.rollno, s1.name, s1.total);
    printf("%d - %s - %d ", s2.rollno, s2.name, s2.total);

    return 0;
}