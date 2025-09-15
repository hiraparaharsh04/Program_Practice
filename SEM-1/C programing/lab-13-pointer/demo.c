#include <stdio.h>

int main()
{

    int a = 10;
    int b = 90;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    printf("Addtion of two number :%d \n", *ptr1 + *ptr2);

    return 0;
}