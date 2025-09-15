#include <stdio.h>
#include <stdlib.h>

int arrayptr(int n, int *ptr)
{
    int sum = 0;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=ptr[i];
    }
    return sum;
}

int main()
{
    int *ptr, n;

    printf("Entre no of element:");
    scanf("%d", &n);

    int res = arrayptr(n, ptr);
    printf("sum of given number using pointer is %d",res);
    return 0;
}