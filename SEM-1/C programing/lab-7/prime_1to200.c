#include <stdio.h>

void prime()
{
    for (int i = 1; i < 200; i++)
{
    int temp = 0;
    int n = i / 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
        printf("%d \n", i);
    }
}

}

int main()
{
    int number;

    printf("Enter a number");
    scanf("%d", &number);

    prime();
    return 0;
}