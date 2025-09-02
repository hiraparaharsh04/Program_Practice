#include <stdio.h>

void siri(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("1/%d + ", i * i);
    }
    printf("\n");
}

int main()
{

    int n;

    printf("Enter N number:");
    scanf("%d", &n);

    siri(n);
    return 0;
}