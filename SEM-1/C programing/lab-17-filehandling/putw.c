#include <stdio.h>

int main()
{
    FILE *fp;
    int n=65;
    char m;
    fp = fopen("e.txt", "w");
    putw(n,fp);
    fclose(fp);
    fp = fopen("e.txt", "r");
    n=getw(fp);
    printf("%d",n);

    return 0;
}
