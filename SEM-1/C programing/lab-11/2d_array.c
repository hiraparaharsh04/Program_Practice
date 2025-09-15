#include <stdio.h>

int main()
{
    int row, col;
    printf("enter row and col:");
    scanf("%d %d", &row, &col);

    int arr1[row][col];
    int arr2[row][col];
    int sum[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element at [%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element at [%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum od 2D array is:\n");
    for (int i = 0; i < row; i++)
    {
        printf("[ ");
        for (int j = 0; j < col; j++)
        {
            printf("%d, ", sum[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return 0;
}