#include <stdio.h>
#include <string.h>

void con(char str1[10], char str2[10])
{
    strcat(str1,str2);
    printf("String 1 is = %s", str1);
}

int main()
{

    char str1[10], str2[10];

    printf("Enter string 1:");
    scanf("%s", &str1);

    printf("Enter string 2:");
    scanf("%s", &str2);

    con(str1, str2);
    return 0;
}