#include <stdio.h>
int length;

int sum_array(int sub1[length], int sub2[length])
{
    int temp[length];
    for (int i = 0; i < length; i++)
    {
        temp[i] = sub1[1] + sub2[1];
    }
    for (int i = 0; i < length; i++)
    {
        printf("Enter sum of [%d] student mark is %d\n", i, temp[i]);
    }
}

int main()
{
    printf("Enter length of array");
    scanf("%d", &length);

    int sub1[length];
    int sub2[length];
    int total[length];

    for (int i = 0; i < length; i++)
    {
        printf("Enter Marks [%d] sub1:", i + 1);
        scanf("%d", &sub1[i]);
    }

    printf("---------------------\n");

    for (int i = 0; i < length; i++)
    {
        printf("Enter Marks [%d] sub2:", i + 1);
        scanf("%d", &sub2[i]);
    }

    sum_array(sub1,sub2);

    return 0;
}
