#include <stdio.h>

int main()
{

    FILE *fp;
    char str[] = "hello world";
    fp = fopen("fwite.txt", "w");
    if (fp == NULL)
    {
        printf("Error");
    }
    else
    {
        fwrite(str, 1, sizeof(str) - 1, fp);
        fclose(fp);
    }
    return 0;
}