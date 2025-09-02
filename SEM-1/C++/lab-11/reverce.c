#include <stdio.h>
#include <string.h>

void rev(char str1[10])
{
    int len = strlen(str1);

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }
}

void palindrom(char str1[10])
{
    int len = strlen(str1);
    char temp[len];
    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        temp[j] = str1[i];
        j++;
    }

    if (strcmp(str1, temp) == 0)
    {
        printf("string is palindrom \n");
    }
    else
    {
        printf("string is not palindrom \n");
    }
}

int main()
{

    char str1[10];

    printf("Enter string 1:");
    scanf("%s", &str1);

    // rev(str1);

    palindrom(str1);
    return 0;
}