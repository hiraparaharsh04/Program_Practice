#include <stdio.h>

void accapt()
{
    int n;
    int sum = 0;
    while (1)
    {
        printf("Enter number (currect sum is %d): ", sum);
        scanf("%d", &n);
        sum = sum + n;
        if (sum > 50)
        {
            break;
        }
    }
    printf("your sum is %d: ", sum);
}

int main()
{
    int n;

    accapt();
    return 0;
}