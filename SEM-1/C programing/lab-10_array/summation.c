#include <stdio.h>

int length;

int summation_array(int mark[length])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += mark[0];
    }
    return sum;
}
int main()
{
    printf("Enter length of array");
    scanf("%d", &length);

    int mark[length];

    int i = 0;
    while (i < length)
    {
        printf("Enter Marks [%dth]", i + 1);
        scanf("%d", &mark[i]);
        i++;
    }

    int sum = summation_array(mark);
    printf("sum is = %d",sum);
    return 0;
}