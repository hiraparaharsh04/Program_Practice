#include <stdio.h>
#include <string.h>

void strlength()
{
    char name[5];

    printf("Enter name :");
    scanf("%s", &name);

    int length = strlen(name);

    for (int i = 0; i < length; i++)
    {
        printf("\"%c\\n", name[i]);
    }
}

void concate()
{
    char str1[10], str2[10];

    printf("Enter string 1:");
    scanf("%s", &str1);
    printf("Enter string 2:");
    scanf("%s", &str2);

    strcat(str1, str2);
    printf("%s", str1);
}

void copy()
{
    char str1[5] = "harsh", str2[5] = "";
    strcpy(str2, str1);
    printf("%s", str2);
}

int main()
{
    strlength();
    concate();
    copy();
    return 0;
}