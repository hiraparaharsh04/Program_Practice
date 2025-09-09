#include <stdio.h>
#include <string.h>
int length;
struct shop
{
    int number;
    char name[20];
    int total_amount;
};

int shop(struct shop s)
{
    int dis;
    for (int i = 0; i < length; i++)
    {
        if (s.total_amount >= 5000)
        {
            dis = (s.total_amount * 0.25);
        }
        else if (s.total_amount >= 4000 && s.total_amount < 5000)
        {
            dis = (s.total_amount * 0.17);
        }
        else if (s.total_amount >= 3000 && s.total_amount < 4000)
        {
            dis = (s.total_amount * 0.08);
        }
        else
        {
            dis = 0;
        }
    }
    return dis;
}

int main()
{

    printf("enter length:");
    scanf("%d", &length);

    struct shop s[length];

    for (int i = 0; i < length; i++)
    {
        printf("Enter Number = ");
        scanf("%d", &s[i].number);
        printf("Enter Name = ");
        scanf("%s", &s[i].name);
        printf("Enter total-amount = ");
        scanf("%d", &s[i].total_amount);
    }
    printf("\nC_Number C_Name\t C_total_amount\t C_discount");
    for (int i = 0; i < length; i++)
    {
        int discount = shop(s[i]);
        printf("\n %d\t %s\t %d\t\t %d", s[i].number, s[i].name, s[i].total_amount, discount);
    }
    return 0;
}