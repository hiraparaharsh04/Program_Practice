#include <stdio.h>

void main(int day)
{
    int month, rem;

    month = day / 30;
    rem = day % 30;

    printf("Total month id %d and day is %d", month, rem);
}

int main()
{
    int day, month, rem;
    printf("Enter day:");
    scanf("%d", &day);

    main(day);
}
