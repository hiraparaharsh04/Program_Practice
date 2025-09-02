#include <stdio.h>

void sum(int num1, int num2, char operation)
{
    switch (operation)
    {
    case '+':
        printf("Answer is = %d", num1 + num2);
        break;
    case '-':
        printf("Answer is = %d", num1 - num2);
        break;
    case '*':
        printf("Answer is = %d", num1 * num2);
        break;
    case '/':
        printf("Answer is = %d", num1 / num2);
        break;

    default:
        printf("enter valid operation");
        break;
    }
}

int main()
{
    int num1, num2;
    char operation;

    printf("Enter operation :");
    scanf("%c", &operation);
    printf("Enter number :");
    scanf("%d", &num1);
    printf("Enter number :");
    scanf("%d", &num2);

    sum(num1, num2, operation);
    return 0;
}