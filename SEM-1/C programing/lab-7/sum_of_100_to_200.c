#include <stdio.h>

void sumof100()
{
    int i = 0;
    int sum =0;
    while (i<=200)
    {
        if(i%7==0){
            printf("%d \n",i);
            sum += i;
        }
        i++;
    }
    printf("sum of all anumber divisible by 7 : %d",sum);
    
}

int main()
{
    sumof100();
    return 0;
}