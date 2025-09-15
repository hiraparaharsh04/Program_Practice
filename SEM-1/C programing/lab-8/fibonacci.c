#include <stdio.h>

void fibo(int n)
{
    int n1 = 0, n2 = 1, temp;
    printf("%d,%d,", n1, n2);
    for (int i = 1; i < n; i++)
    {
        temp = n1 + n2;
        printf("%d,", temp);
        n1 = n2;
        n2 = temp;
    }
}

int main()
{
    int n;

    printf("Enter a choise: ");
    scanf("%d", &n);

    fibo(n);
    return 0;
}
