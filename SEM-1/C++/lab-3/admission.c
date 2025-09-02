#include <stdio.h>

void check(int math, int phy, int che)
{
    int total = math + phy + che;

    if ((math >= 50, phy >= 45, che >= 60, total >= 170) || (math + phy >= 120))
    {
        printf("Eligibile for admission");
    }
    else
    {
        printf("Not eligibile for admission");
    }
}

int main()
{

    int math, phy, che;

    printf("Enter math:");
    scanf("%d", &math);
    printf("Enter phy:");
    scanf("%d", &phy);
    printf("Enter che:");
    scanf("%d", &che);

    check(math, phy, che);
    return 0;
}
