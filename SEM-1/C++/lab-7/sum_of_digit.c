#include <stdio.h>

void sumdigit(long number)
{
    int sum = 0;
    while (number!=0)
    {
        sum += number%10;
        number =number/10;
    }
    printf("sum is : %d",sum);
    
}

int main()
{
    long number;

    printf("Enter a number");
    scanf("%ld",&number);

    sumdigit(number);
    return 0;
}