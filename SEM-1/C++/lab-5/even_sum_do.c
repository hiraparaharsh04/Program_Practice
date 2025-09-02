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
            sum += i;
        }
        i++;
    }
    printf("sum of even number using (while) %d\n", sum);
}

void evendo(int n)
{

    int i = 1;
    int sum = 0;
    do
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
            sum += i;
        }
        i++;
    } while (i <= n);

    printf("sum of even number using (do while) %d\n", sum);
}
int main()
{

    int n;

    printf("Enter N number:");
    scanf("%d", &n);

    even(n);
    evendo(n);
    return 0;
}