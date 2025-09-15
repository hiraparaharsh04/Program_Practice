#include <stdio.h>

int fac(int number)
{
    if (number == 0|| number == 1)
    {
        return 1;
    }
    else
    {
        return number*fac(number-1);
    }
}

int main()
{
    int number, result;

    printf("enter number:");
    scanf("%d",&number);

    result = fac(number);
    printf("result %d",result);
    return 0;
}