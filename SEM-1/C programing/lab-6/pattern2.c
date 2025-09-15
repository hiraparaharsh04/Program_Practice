#include <stdio.h>

void len(int length)
{
    int temp = 1; 
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",temp);
            temp ++;
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