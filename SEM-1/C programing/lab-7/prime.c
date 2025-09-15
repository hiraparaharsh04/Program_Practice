#include <stdio.h>

void prime(int number)
{
    int temp = 0;
    for (int i = 2; i < number/2; i++)
    {
        if (number % i == 0)
        {
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}

int main()
{
    int number;

    printf("Enter a number");
    scanf("%d", &number);

    prime(number);
    return 0;
}