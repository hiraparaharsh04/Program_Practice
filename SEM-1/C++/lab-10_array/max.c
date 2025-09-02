#include <stdio.h>
int length;

int max_array(int num_array[length])
{
    int max = num_array[0];
    for (int i = 1; i < length; i++)
    {
        if (num_array[i] > max)
        {
            max = num_array[i];
        }
    }
    return max;
}
int min_array(int num_array[length])
{
    int min = num_array[0];
    for (int i = 1; i < length; i++)
    {
        if (num_array[i] < min)
        {
            min = num_array[i];
        }
    }
    return min;
}
int main()
{
    printf("Enter length of array");
    scanf("%d", &length);

    int mark[length];

    for (int i = 0; i < length; i++)
    {
        printf("Enter Marks [%dst]", i + 1);
        scanf("%d", &mark[i]);
    }

    int max_value = max_array(mark);
    int min_value = min_array(mark);

    printf("Max number is %d \nmin number is %d", max_value, min_value);

    return 0;
}
