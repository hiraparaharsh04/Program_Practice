#include <stdio.h>

int main()
{
    FILE *fp;
    char t[10];
    fp = fopen("e.txt", "r");
    if(fp==NULL)
    printf("no data");
    fgets(t, 5, fp);
    printf("%s", t);
    fclose(fp);
    return 0;
}