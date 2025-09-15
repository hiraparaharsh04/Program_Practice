#include <stdio.h>

struct student
{
    char gender[10];
    char name[10];
    char course[10];
    int year;
    int sub1;
    int sub2;
    int sub3;
};

int main()
{
    struct student s1;
    struct student s2;

    printf("Enter Name = ");
    scanf("%s", &s1.name);
    printf("Enter course = ");
    scanf("%s", &s1.course);
    printf("Enter year = ");
    scanf("%d", &s1.year);
    printf("Enter gender = ");
    scanf("%s", &s1.gender);

    printf("Enter sub1 = ");
    scanf("%d", &s1.sub1);
    printf("Enter sub1 = ");
    scanf("%d", &s1.sub2);
    printf("Enter sub1 = ");
    scanf("%d", &s1.sub3);

    printf("%s - %d - %s - %s - %d - %d - %d \n", s1.name, s1.year, s1.course, s1.gender, s1.sub1, s1.sub2, s1.sub3);
    printf("total marks is %d \n", s1.sub1 + s1.sub2 + s1.sub3);
    printf("percentage is %d", (s1.sub1 + s1.sub2 + s1.sub3));

    return 0;
}