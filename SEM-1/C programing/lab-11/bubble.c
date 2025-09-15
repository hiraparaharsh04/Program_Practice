#include <stdio.h>
int length;

void bubble(int num_array[length])
{
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (num_array[i] > num_array[i + 1])
            {
                int temp = num_array[i + 1];
                num_array[i + 1] = num_array[i];
                num_array[i] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d \n", num_array[i]);
    }
}

int main()
{

    printf("Enter length :");
    scanf("%d", &length);

    int num_array[length];

    for (int i = 0; i < length; i++)
    {
        printf("enter num_array[%d]", i + 1);
        scanf("%d", &num_array[i]);
    }

    bubble(num_array);
    return 0;
}