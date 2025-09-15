#include <stdio.h>

void len(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
int main()
{
    int length;

    printf("Enter length :");
    scanf("%d", &length);

    len(length);
    return 0;
}