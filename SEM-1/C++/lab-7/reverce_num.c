#include <stdio.h>

void reverce(long number)
{
    while (number!=0)
    {
        printf(" %d",number%10);
        number =number/10;
    }
    
}

int main()
{
    long number;

    printf("Enter a number");
    scanf("%ld",&number);

    reverce(number);
    return 0;
}