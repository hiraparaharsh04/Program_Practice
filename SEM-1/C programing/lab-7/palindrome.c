#include <stdio.h>

void reverce(int number)
{
    int reversed = 0, original = number;
    while (number > 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    if (original == reversed)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
}

int main()
{
    int number;

    printf("Enter a number");
    scanf("%d", &number);

    reverce(number);
    return 0;
}
