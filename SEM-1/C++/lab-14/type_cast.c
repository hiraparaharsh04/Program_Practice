#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    float b = 20.5;

    void *ptr;
    ptr = &a;
    printf("%d \n", (int *)ptr);
    ptr = &b;
    printf("%f", (int *)ptr);
    return 0;
}