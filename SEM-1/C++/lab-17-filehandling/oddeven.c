#include <stdio.h>
int main()
{
    FILE *fp, *odd, *even;
    int n, element;
    char ch;
    printf("Enter element:");
    scanf("%d", &element);

    fp = fopen("num.txt", "w");
    for (int i = 1; i <= element; i++)
    {
        printf("Enter Number:", i);
        scanf("%d", &n);
        fprintf(fp, "\n%d", n);
    }
    fclose(fp);
    fp = fopen("num.txt", "r");
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");
    while (fscanf(fp, "%d", &n) != EOF)
    {
        if (n % 2 == 0)
        {
            fprintf(even, "%d\n", n);
        }
        else
        {
            fprintf(odd, "%d\n", n);
        }
    }
    fclose(fp);
    fclose(odd);
    fclose(even);
}