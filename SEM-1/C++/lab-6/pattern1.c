#include <stdio.h>

void sec(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    
    sec(n);
    return 0;
}