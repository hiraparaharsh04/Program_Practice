#include<stdio.h>

void add(int a ,int b){
    int sum = a+b;
    printf("add is : %d \n)",sum);
}
void sub(int a ,int b){
    int sum = a-b;
    printf("sub is : %d \n)",sum);
}
void mul(int a ,int b){
    int sum = a*b;
    printf("mul is : %d \n)",sum);
}
void div(int a ,int b){
    int sum = a/b;
    printf("div is : %d \n)",sum);
}

int main(){
    int a,b;

    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);

    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);

    return 0 ;
}