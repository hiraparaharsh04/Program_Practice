#include <stdio.h>

int main()
{
    FILE *fp;
    int l;
    char ch;
    fp = fopen("data.txt", "r");
    do
    {
        ch = fgetc(fp);
        printf("%c", ch);
    } while (ch != EOF);
    rewind(fp);
    do
    {
        ch = fgetc(fp);
        printf("%c", ch);
    } while (ch != EOF);

    l = ftell(fp);
    printf("\n pos %d", l);

    return 0;
}