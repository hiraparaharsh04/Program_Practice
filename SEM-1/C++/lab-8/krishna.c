#include <stdio.h>

void kri(int n)
{
    int sum = 0, rem, fact;
    int ognum = n;
    while (n > 0)
    {
        rem = n % 10;
        fact = 1; 
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        sum += fact;
        n = n / 10;
    }

    if (ognum == sum)
    {
        printf("Krishnamurti number\n");
    }
    else
    {
        printf("Not an Krishnamurti number\n");
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    kri(n);
    return 0;
}
