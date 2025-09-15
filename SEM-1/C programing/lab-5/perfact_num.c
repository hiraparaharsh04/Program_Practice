#include <stdio.h>

void perfactnum(int n)
{
    int temp = n;
    int sum = 0;

    for (int i = temp-1; i >= 1; i--)
    {
        if (temp % i == 0)
        {
            temp=temp/i;
            printf("%d\n", i);
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d: is perfact number", n);
    }
    else
    {
        printf("%d: is not perfact number", n);
    }
    printf("\n");
}

int main()
{

    int n;

    printf("Enter N perfact number:");
    scanf("%d", &n);

    perfactnum(n);
    return 0;
}