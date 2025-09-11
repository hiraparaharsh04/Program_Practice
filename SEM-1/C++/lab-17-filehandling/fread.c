#include <stdio.h>
#include <string.h>
int main()
{

    FILE *fp;
    char str[] = "hello world....!";
    char str1[10] = " ";
    fp = fopen("fwite.txt", "w");
    fwrite(str,1,strlen(str),fp);
    fclose(fp);
    fp = fopen("fwite.txt", "r");
    fread(str1, 1, 6, fp);
    printf("%s", str);
    return 0;
}