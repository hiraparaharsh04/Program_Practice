#include <stdio.h>

void mul(int n)
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d \n", n, i, n * i);
        i++;
    }
}

int main()
{

    int n;

    printf("Enter N number:");
    scanf("%d", &n);

    mul(n);
    return 0;
}