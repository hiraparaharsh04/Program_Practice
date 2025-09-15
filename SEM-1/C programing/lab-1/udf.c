#include <stdio.h>

void sum()
{
    int a ,b, c;
    printf("enter A value:");
    scanf("%d",&a);
    printf("enter B value:");
    scanf("%d",&b);
    c = a + b;
    printf("\n%d", c);
}
int main()
{

    sum();

    return 0;
}
