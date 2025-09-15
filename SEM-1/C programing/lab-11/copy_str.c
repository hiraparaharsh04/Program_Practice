#include <stdio.h>
#include <string.h>

void copy(char str1[10], char str2[10])
{
    strcpy(str2, str1);
    printf("String 2 is = %s", str2);
}

int main()
{

    char str1[10], str2[10];

    printf("Enter string 1:");
    scanf("%s", &str1);

    printf("Enter string 2:");
    scanf("%s", &str2);

    copy(str1, str2);
    return 0;
}