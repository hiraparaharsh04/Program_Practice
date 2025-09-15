#include <stdio.h>

void even(int n)
{

    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
             printf("%d \n", i);
             sum +=i;
        }
        i++;
    }
    printf("sum of even number is %d\n", sum);
}

int main()
{

    int n;

    printf("Enter N number:");
    scanf("%d", &n);

    even(n);
    return 0;
}