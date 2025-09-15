#include <stdio.h>

void pattern(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length-i+1; j >=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int length;
    printf("Enter length :");
    scanf("%d", &length);
    
    return 0;
}