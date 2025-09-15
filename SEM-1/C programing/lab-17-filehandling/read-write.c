#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int n;
    fp1 = fopen("read.text", "r");
    fp2 = fopen("read1.text", "w");
    fscanf(fp1, "%d", &n);
    fscanf(fp2, "%d", n);
    fclose(fp1);
    fclose(fp2);
}