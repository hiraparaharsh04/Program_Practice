#include <stdio.h>
#include <string.h>

int main()
{
    int length;
    printf("Enter name of student:");
    scanf("%d", &length);

    char studentlist[length][10];
    char serchname[10];

    for (int i = 0; i < length; i++)
    {
        printf("Enter name of[%d] student:", i);
        scanf("%s", studentlist[i]);
    }

    printf("Enter name for find student:");
    scanf("%s", &serchname);

    int isfound = 0;
    for (int i = 0; i < length; i++)
    {
        if (strcmp(studentlist[i], serchname) == 0)
        {
            printf("%s Name fount at [%s] in list \n", serchname, i + 1);
            isfound = 1;
        }
        printf("%s", studentlist[i]);
    }

    if (isfound == 0)
    {
        printf("%s Name not fount in list \n", serchname);
    }
    return 0;
}