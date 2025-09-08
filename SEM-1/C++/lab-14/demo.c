#include <stdio.h>
#include <stdlib.h>

void arrayptr(int n, int *ptr)
{

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
}

int main()
{
    int *ptr, n;

    printf("Entre no of element:");
    scanf("%d", &n);

    arrayptr(n, ptr);
    return 0;
}