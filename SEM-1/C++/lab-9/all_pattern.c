#include <stdio.h>

void pattern1(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern3(int length)
{
    int temp = 1;
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", temp);
            temp++;
        }
        printf("\n");
    }
}

void pattern4(int length)
{
    for (int i = 1; i < length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
} 

void pattern5(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void pattern6(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern7(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length - i; j >= 1; j--)
        {
            printf(" ");
        }
        int count = 1;
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}

void pattern8(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void pattern9(int length)
{
    int count = length;
    for (int i = 1; i <= length ; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k < length-i+2; k++)
        {
            printf("%d ", count);
        }
        count--;
        printf("\n");
    }
}

void pattern10(int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = length - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for (int i = 2; i <= length ; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < length-i+2; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int length;
    int choice;

    printf("Enter your pattern choice :");
    scanf("%d", &choice);

    printf("Enter pattern length :");
    scanf("%d", &length);

    switch (choice)
    {
    case 1:
        pattern1(length);
        break;
    case 2:
        pattern2(length);
        break;
    case 3:
        pattern3(length);
        break;
    case 4:
        pattern4(length);
        break;
    case 5:
        pattern5(length);
        break;
    case 6:
        pattern6(length);
        break;
    case 7:
        pattern7(length);
        break;
    case 8:
        pattern8(length);
        break; 
    case 9:
        pattern9(length);
        break;
    case 10:
        pattern10(length);
        break;
    default:
        printf("invaild choice");
        break;
    }
    return 0;
}