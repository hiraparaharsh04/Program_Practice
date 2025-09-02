#include <stdio.h>

void pattern(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

int main()
{
    int length;
    printf("Enter length: ");
    scanf("%d", &length);
    
    
    pattern(length);
    return 0;
}
