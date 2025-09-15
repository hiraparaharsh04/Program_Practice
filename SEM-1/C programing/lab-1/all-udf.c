#include <stdio.h>

int sum1 (int a, int b){
    int sum = a+b;
    printf("sum is (with return type with argument: %d \n)",sum);
    return 0;
}

void sum2(int a ,int b){
    int sum = a+b;
    printf("sum is (without return type with argument: %d \n)",sum);
}

void sum3(){
    int a,b;

    printf("enter 2 number :");
    scanf("%d",&a);
    scanf("%d",&b);

    int sum = a+b;
    printf("sum is = %d \n",sum);
}

void sum4(){
    int a,b;

    printf("enter 2 number :");
    scanf("%d",&a);
    scanf("%d",&b);

    int sum = a+b;
    printf("sum is = %d \n",sum);

    return 0;
}

int main(){
    int a,b;

    printf("enter 2 number :");
    scanf("%d",&a);
    scanf("%d",&b);

    sum1(a,b); //with return type and with argument
    sum2(a,b); //without return type and with argument
    sum3(); //without return type and without argument
    sum4(); //with return type and without argument
}