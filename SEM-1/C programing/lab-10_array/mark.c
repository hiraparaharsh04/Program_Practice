#include <stdio.h>

void array(int mark[10],char name[10])
{
    int i = 0;
    while (i <5)
    {
        printf("Marks of [%dth] number \n",i, mark[i]);
        i++;
    }

    printf("Name is %s",name);
}
int main()
{

    int mark[10];
    char name[10];
    printf("Enter student name:");
    scanf("%c", name);

    int i=0;
    while (i < 5)
    {
        printf("Enter [%dth] number", i);
        scanf("%d", &mark[i]);
        i++;
    }
    array(mark,name);
    return 0;
}