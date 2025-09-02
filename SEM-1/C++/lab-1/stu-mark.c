#include<stdio.h>

void mark(int s1,int s2,int s3){
    int total;
    float avg;

    total=s1+s2+s3;
    avg=total/3;

    printf("your total is %d \n",total);
    printf("your avg is %.2f",avg);


}

int main()
{
    int id;
    float s1,s2,s3,tot,avg;
    char name[10];

    printf("enter id:");
    scanf("%d",&id);

    printf("enter S1,s2,s3 mark:");
    scanf("%f",&s1);
    scanf("%f",&s2);
    scanf("%f",&s3);

    mark(s1,s2,s3);
    return 0;

}