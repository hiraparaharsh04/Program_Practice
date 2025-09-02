#include <stdio.h>

void weeks(int week)
{
    switch (week)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;

    default:
        printf("not a day");
        break;
    }
}

int main()
{
    int week;

    printf("Enter Week number :");
    scanf("%d", &week);

    weeks(week);
    return 0;
}