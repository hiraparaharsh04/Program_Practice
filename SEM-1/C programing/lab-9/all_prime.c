#include <stdio.h>
// 1.prime number
// 2.print prime between range
// 3.count prime number
// 4.check no is happy or not
// 5.check no is happy prime or not
// 6.check no is happy between range

int prime_or_not(int number)
{
    int temp = 0;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            temp = 1;
            break;
        }
    }
    if (temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void prime_range(int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%d \n", i);
        }
    }
}

int prime_count()
{
    int count = 0, number, result;
    while (1)
    {
        printf("Enter number to count:");
        scanf("%d", &number);
        if (number < 0)
        {
            break;
        }

        int result = prime_or_not(number);
        if (!result)
        {
            count++;
        }
    }
    return count;
}

int happy_number(int number)
{
    int original = number;
    int result;
    int rem;
    while (number != 1 && number != 4)
    {
        int sum = 0;
        {
            rem = number % 10;
            sum += rem * rem;
            number = number / 10;
        }
        number = sum;
        if (number == 1)
        {
            return 1;
        }
        else if (number == 4)
        {
            return 0;
        }
    }
    printf("sum = %d", number);
    return 0;
}
int happy_prime(int number){

}

int main()
{
    int choice;
    int number, result;
    int start, end;
    int count = 0;
    printf(" 1.prime number \n 2.print prime between range \n 3.check prime number \n 4.check no is happy or not \n 5.check no is happy prime or not \n 6.check no is happy between range \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("Enter number is prime or not:");
        scanf("%d", &number);
        result = prime_or_not(number);
        if (result == 1)
        {
            printf("Not prime number %d", result);
        }
        else
        {
            printf("prime number %d", result);
        }
        break;
    case 2:

        printf("Enter number is prime number between range:");
        scanf("%d", &start);
        scanf("%d", &end);
        prime_range(start, end);
        break;
    case 3:
        result = prime_count();
        printf("Counte is %d", result);
        break;

    case 4:
        printf("Check number is happy number or not:");
        scanf("%d", &number);
        result = happy_number(number);
        if (result == 1)
        {
            printf("Happy number");
        }
        else
        {
            printf("Not happy number");
        }
        break;
    case 5:
        printf("Check number is happy prime or not:");
        scanf("%d", &number);
        result = happy_prime(number);
        if (result == 1)
        {
            printf("Happy prime");
        }
        else
        {
            printf("Not happy prime");
        }
        break;

    default:
        break;
    }

    return 0;
}