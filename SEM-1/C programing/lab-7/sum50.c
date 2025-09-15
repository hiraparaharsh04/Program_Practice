#include <stdio.h>

void oddsum()
{
    int i = 1;
    int length_row = 0;
    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            length_row++;

            if (i < 10)
            {
                printf("0%d ", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        if (length_row == 5)
        {
            length_row = 0;
            printf("\n");
        }
        i++;
    }
}

int main()
{
    oddsum();
    return 0;
}