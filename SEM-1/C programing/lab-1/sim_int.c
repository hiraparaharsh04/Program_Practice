#include <stdio.h>

int main()
{
    int p, t, r;
    float SI;

    printf("enter P ,T ,R value :");
    scanf("%d", &p);
    scanf("%d", &t);
    scanf("%d", &r);

    SI = (p * t * r) / 100;

    printf("Simple intrest is :%f", SI);
    return 0;
}