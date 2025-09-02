#include <stdio.h>

void arm(int n)
{
    int sum = 0, rem, cube;
    int ognum = n;  

    while (n > 0)
    {
        rem = n % 10;
        cube = rem * rem * rem;
        n = n / 10;
        sum += cube;
    }

    if (ognum == sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    arm(n);
    return 0;
}
