#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("copy-file.txt", "r");
    fp2 = fopen("copy.txt", "w");
    do
    {
        ch = fgetc(fp1);
        fputc(ch,fp2);
        printf("%c",ch);
    } while (ch != EOF);
    fclose(fp1);
    fclose(fp2);

    return 0;
}