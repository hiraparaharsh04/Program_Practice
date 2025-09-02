#include <stdio.h>

void leapyear(int year)
{
    if (year % 100 == 0 && year % 400 == 0 || year % 100 != 0 && year % 4 == 0){
        printf("Year is leap year");
    }else{
         printf("Year is not leap year");
    }
}

int main()
{
    int year;
    printf("Enter Year :");
    scanf("%d", &year);

    leapyear(year);
    return 0;
}